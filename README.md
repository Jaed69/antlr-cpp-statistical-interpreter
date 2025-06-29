# ANTLR C++ Statistical Interpreter

A powerful C++ interpreter built with ANTLR4 for statistical analysis and mathematical computations.

## Features

- **Data Types**: Support for `int`, `float`, and `string` types
- **Mathematical Operations**: Basic arithmetic (`+`, `-`, `*`, `/`) and unary operations
- **Statistical Functions**: 
  - `mean()` - Calculate arithmetic mean
  - `variance()` - Calculate variance
  - `fisher()` - Calculate Fisher skewness coefficient
- **Variable Management**: Declare and use variables with symbol table
- **Expression Evaluation**: Complex mathematical expressions with parentheses
- **Docker Support**: Containerized development environment

## Quick Start

### Using Docker (Recommended)

1. **Build and run the container:**
   ```bash
   docker-compose up -d
   ```

2. **Enter the container:**
   ```bash
   docker exec -it cpp_antlr_env bash
   ```

3. **Compile the project:**
   ```bash
   cd /app
   rm -rf build && mkdir build && cd build
   cmake ..
   make
   ```

4. **Run the interpreter:**
   ```bash
   # Create an input file with your code
   echo "int x = 10; int y = 20; x + y * 2;" > ../src/input.txt
   
   # Execute the interpreter
   ./mi_interprete
   ```

## Example Usage

Create a file `src/input.txt` with your code:

```cpp
// Variable declarations
int a = 5;
int b = 15;
float pi = 3.14159;

// Basic operations
a + b;          // Output: 20
a * b;          // Output: 75
pi * 2;         // Output: 6.28318

// Statistical analysis
mean(1, 2, 3, 4, 5);        // Output: 3
variance(1, 2, 3, 4, 5);    // Output: 2
fisher(1, 2, 3, 4, 5);      // Output: 0
```

## Grammar

The interpreter uses ANTLR4 grammar defined in `src/grammar/EmployeeEval.g4`:

- **Variables**: `TYPE ID = expr;` where TYPE is `int`, `float`, or `string`
- **Expressions**: Support for arithmetic operations with proper precedence
- **Functions**: Built-in statistical functions
- **Comments**: Line comments starting with `//`

## Project Structure

```
├── CMakeLists.txt          # Build configuration
├── Dockerfile              # Docker container setup
├── docker-compose.yml      # Docker Compose configuration
├── src/
│   ├── grammar/
│   │   └── EmployeeEval.g4 # ANTLR grammar definition
│   ├── main.cpp            # Main interpreter program
│   ├── EvalVisitor.cpp     # Visitor implementation
│   ├── EvalVisitor.h       # Visitor header
│   ├── SymbolTable.h       # Symbol table definition
│   └── input.txt           # Input file for testing
└── build/                  # Build directory (auto-generated)
```

## Requirements

- **C++17** compatible compiler
- **CMake 3.16+**
- **Java 17+** (for ANTLR4 JAR)
- **ANTLR 4.12.0**
- **Docker** (for containerized development)

## Building from Source

If you prefer not to use Docker:

1. Install dependencies (C++17, CMake, Java 17+)
2. Download ANTLR 4.12.0 complete JAR
3. Build:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is open source and available under the [MIT License](LICENSE).

## Author

Jhamil Brijan Peña Cárdenas

---

Built with ❤️ using ANTLR4 and C++
