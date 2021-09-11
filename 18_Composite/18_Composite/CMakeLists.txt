cmake_minimum_required(VERSION 3.5)

project(18_Composite LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./src SRC)
add_executable(18_Composite main.cpp ${SRC})


include_directories(./include)
