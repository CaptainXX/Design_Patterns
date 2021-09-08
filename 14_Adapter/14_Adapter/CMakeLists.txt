cmake_minimum_required(VERSION 3.5)

project(14_Adapter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./src SRC)
add_executable(14_Adapter main.cpp ${SRC})


include_directories(./include)
