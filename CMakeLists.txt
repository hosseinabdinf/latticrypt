cmake_minimum_required(VERSION 3.10)

# Project name and version
project(latticrypt VERSION 1.0.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
set(SOURCES
    src/main.cpp
    src/latticrypt.cpp
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Installation rules
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
