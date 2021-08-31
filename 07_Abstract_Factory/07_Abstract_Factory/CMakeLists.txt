cmake_minimum_required(VERSION 3.5)

project(07_Abstract_Factory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./src SRC)
add_executable(07_Abstract_Factory main.cpp ${SRC})


include_directories(./include)
