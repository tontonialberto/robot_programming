cmake_minimum_required(VERSION 2.8.3)
project(mini_core)

find_path(EIGEN3_INCLUDE_DIR 
  /usr/include/eigen3
  /usr/local/include/eigen3
)

# TODO find Eigen3 package
find_package(Eigen3 REQUIRED)

# TODO specify additional locations of header files
include_directories(src ${Eigen3_INCLUDE_DIR})

# add project source code
add_subdirectory(src)

# TODO do the same for executables
add_subdirectory(executables)
