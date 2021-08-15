cmake_minimum_required(VERSION 3.5)

project(04_Decorator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./src SRC)
add_executable(04_Decorator main.cpp ${SRC})


include_directories(./include)
