# TODO compile executable that will be run  
add_executable(program many_object_in_stack_example.cpp)

# Linking the required custom library
target_link_libraries(program core_library)