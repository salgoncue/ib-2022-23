# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Salvador González Cueto alu0101424750@ull.edu.es
# @date MM DD, YYYY 
# @brief A cmake file for programa2
#

cmake_minimum_required(VERSION 3.1) 

# set the project name 
project(programa2              
    VERSION 1.0
    DESCRIPTION ""
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "programa2" to be built from the source files listed in the command invocation.
add_executable(programa2
    src/programa2.h
    src/programa2.cc
    src/programa2_main.cc)

# Add expected compiler features to a target.
target_compile_features(programa2 PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(programa2 PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
