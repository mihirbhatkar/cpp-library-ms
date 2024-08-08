# Specify the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(hello_world VERSION 1.0 LANGUAGES CXX)

# Add the include directory
include_directories(include)

# Define the source files
set(SOURCES
    src/main.cpp
    src/books.cpp
    src/utility.cpp
    src/racks.cpp
    src/bookshelfs.cpp
)

# Define the executable
add_executable(main ${SOURCES})

# Optionally set C++ standard
set_target_properties(main PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

