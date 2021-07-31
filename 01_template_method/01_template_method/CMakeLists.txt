cmake_minimum_required(VERSION 3.5)

project(01_template_method LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(. SRC)
add_executable(01_template_method ${SRC})

include_directories(include/)
