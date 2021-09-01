cmake_minimum_required(VERSION 3.4)

project(08_Prototype LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./src SRC)
add_executable(08_Prototype main.cpp ${SRC})


include_directories(./include)
