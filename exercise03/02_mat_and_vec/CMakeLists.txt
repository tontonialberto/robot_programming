add_executable(static_vec_test
  static_vec_test.cpp)

add_executable(static_mat_test
  static_mat_test.cpp)

add_library(linalg_library
  mat_f.cpp
  vec_f.cpp)

add_executable(dynamic_mat_test
  dynamic_mat_test.cpp)

target_link_libraries(dynamic_mat_test
  linalg_library)


