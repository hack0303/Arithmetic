cmake_minimum_required(VERSION 3.0)

# SET THE PROJECT NAME 
project(Arithmetic VERSION 1.0)

# ADD THE EXECUTABLE
add_executable(Arithmetic main.c)

# ADD
target_include_directories(v PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )