cmake_minimum_required(VERSION 3.10.2)
project(cmake-first)

# Import ETL local version
add_subdirectory(custom/etl)

# Very ugly workaround in order to resolve SFML path
set(SFML_DIR "/usr/lib/SFML/2.5.1/cmake/SFML")

# Import SFML shared library
find_package(SFML COMPONENTS system graphics audio REQUIRED)

add_executable(program main.cpp)

target_link_libraries(program PUBLIC etl sfml-graphics)