cmake_minimum_required(VERSION 3.10.2)
project(cmake-first)

# Very ugly workaround in order to resolve SFML path
set(SFML_DIR "/usr/lib/SFML/2.5.1/cmake/SFML")

# Import SFML shared library
find_package(SFML COMPONENTS system graphics audio REQUIRED)

include_directories(custom/etl/include)

add_executable(program main.cpp)

target_link_libraries(program sfml-graphics)