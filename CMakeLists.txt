cmake_minimum_required(VERSION 3.0.0)
project(RustLikeNumerals VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set (CXX_HEADERS
    "inc/numerals.hpp"
    "inc/t_generic.hxx"
)

set (CXX_SOURCES
    "src/main.cpp"
)

include_directories("inc")
include_directories("src")

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra)
endif()

add_executable(${PROJECT_NAME} ${CXX_HEADERS} ${CXX_SOURCES})
