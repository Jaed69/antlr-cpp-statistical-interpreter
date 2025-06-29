# Partimos de la imagen base con Clang
FROM silkeh/clang:18

# Instala TODAS las dependencias, incluyendo Java 17 y Maven
RUN apt-get update && apt-get install -y \
    cmake \
    git \
    build-essential \
    uuid-dev \
    pkg-config \
    openjdk-17-jdk \
    curl \
    maven

# Clonamos el código fuente de la versión 4.12.0
RUN git clone --depth 1 --branch 4.12.0 https://github.com/antlr/antlr4.git /tmp/antlr4

# Usamos Maven para construir el JAR. Esto crea AMBOS jars (el delgado y el completo).
RUN cd /tmp/antlr4 && mvn package -Dmaven.test.skip=true

# Creamos el directorio de destino y copiamos el JAR "COMPLETO"
RUN mkdir -p /opt/antlr && \
    cp /tmp/antlr4/tool/target/antlr4-4.12.0-complete.jar /opt/antlr/

# Limpiamos el código fuente que ya no necesitamos
RUN rm -rf /tmp/antlr4

# El directorio de trabajo
WORKDIR /app

# El comando para mantenerlo vivo
CMD ["tail", "-f", "/dev/null"]