# Intérprete Estadístico ANTLR C++

Un potente intérprete C++ construido con ANTLR4 para análisis estadístico y cálculos matemáticos.

## Características

- **Tipos de Datos**: Soporte para tipos `int`, `float` y `string`
- **Operaciones Matemáticas**: Aritmética básica (`+`, `-`, `*`, `/`) y operaciones unarias
- **Funciones Estadísticas**: 
  - `mean()` - Calcular la media aritmética
  - `variance()` - Calcular la varianza
  - `fisher()` - Calcular el coeficiente de asimetría de Fisher
- **Gestión de Variables**: Declarar y usar variables con tabla de símbolos
- **Evaluación de Expresiones**: Expresiones matemáticas complejas con paréntesis
- **Soporte Docker**: Entorno de desarrollo contenerizado

## Inicio Rápido

### Usando Docker (Recomendado)

1. **Construir y ejecutar el contenedor:**
   ```bash
   docker-compose up -d
   ```

2. **Entrar al contenedor:**
   ```bash
   docker exec -it cpp_antlr_env bash
   ```

3. **Compilar el proyecto:**
   ```bash
   cd /app
   rm -rf build && mkdir build && cd build
   cmake ..
   make
   ```

4. **Ejecutar el intérprete:**
   ```bash
   # Crear un archivo de entrada con tu código
   echo "int x = 10; int y = 20; x + y * 2;" > ../src/input.txt
   
   # Ejecutar el intérprete
   ./mi_interprete
   ```

## Ejemplo de Uso

Crea un archivo `src/input.txt` con tu código:

```cpp
// Declaración de variables
int a = 5;
int b = 15;
float pi = 3.14159;

// Operaciones básicas
a + b;          // Salida: 20
a * b;          // Salida: 75
pi * 2;         // Salida: 6.28318

// Análisis estadístico
mean(1, 2, 3, 4, 5);        // Salida: 3
variance(1, 2, 3, 4, 5);    // Salida: 2
fisher(1, 2, 3, 4, 5);      // Salida: 0
```

## Gramática

El intérprete usa la gramática ANTLR4 definida en `src/grammar/EmployeeEval.g4`:

- **Variables**: `TIPO ID = expresión;` donde TIPO es `int`, `float` o `string`
- **Expresiones**: Soporte para operaciones aritméticas con precedencia adecuada
- **Funciones**: Funciones estadísticas incorporadas
- **Comentarios**: Comentarios de línea que comienzan con `//`

## Estructura del Proyecto

```
├── CMakeLists.txt          # Configuración de compilación
├── Dockerfile              # Configuración del contenedor Docker
├── docker-compose.yml      # Configuración de Docker Compose
├── src/
│   ├── grammar/
│   │   └── EmployeeEval.g4 # Definición de gramática ANTLR
│   ├── main.cpp            # Programa principal del intérprete
│   ├── EvalVisitor.cpp     # Implementación del visitor
│   ├── EvalVisitor.h       # Cabecera del visitor
│   ├── SymbolTable.h       # Definición de tabla de símbolos
│   └── input.txt           # Archivo de entrada para pruebas
└── build/                  # Directorio de compilación (auto-generado)
```

## Requisitos

- Compilador compatible con **C++17**
- **CMake 3.16+**
- **Java 17+** (para el JAR de ANTLR4)
- **ANTLR 4.12.0**
- **Docker** (para desarrollo contenerizado)

## Compilación desde el Código Fuente

Si prefieres no usar Docker:

1. Instalar dependencias (C++17, CMake, Java 17+)
2. Descargar el JAR completo de ANTLR 4.12.0
3. Compilar:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```

## Contribuir

1. Haz fork del repositorio
2. Crea tu rama de característica (`git checkout -b feature/caracteristica-increible`)
3. Confirma tus cambios (`git commit -m 'Agregar característica increíble'`)
4. Empuja a la rama (`git push origin feature/caracteristica-increible`)
5. Abre un Pull Request

## Licencia

Este proyecto es de código abierto y está disponible bajo la [Licencia MIT](LICENSE).

## Autor

Jhamil Brijan Peña Cárdenas

---

Construido con ❤️ usando ANTLR4 y C++
