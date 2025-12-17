# latticrypt
Lattice Based Cryptography in C/C++

## Description

This is a C/C++ project template for implementing lattice-based cryptography algorithms. The project uses CMake as its build system.

## Prerequisites

- CMake (version 3.10 or higher)
- A C++ compiler with C++11 support (e.g., GCC, Clang, MSVC)

## Building the Project

### Linux/macOS

```bash
# Create a build directory
mkdir build
cd build

# Configure the project
cmake ..

# Build the project
cmake --build .

# Run the executable
./latticrypt
```

### Windows

```bash
# Create a build directory
mkdir build
cd build

# Configure the project
cmake ..

# Build the project
cmake --build . --config Release

# Run the executable
Release\latticrypt.exe
```

## Project Structure

```
latticrypt/
├── CMakeLists.txt      # CMake configuration file
├── include/            # Header files
│   └── latticrypt.h    # Main library header
├── src/                # Source files
│   ├── main.cpp        # Main entry point
│   └── latticrypt.cpp  # Library implementation
└── README.md           # This file
```

## Installation

To install the built executable:

```bash
cmake --install build --prefix /path/to/install
```

## License

See the LICENSE file for details.
