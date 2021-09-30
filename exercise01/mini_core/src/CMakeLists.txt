file(GLOB source "utils/*.cpp" "messages/*.cpp")

add_library(core_library SHARED
  # TODO add other .cpp files
  ${source}
)

# Linking the required external library
target_link_libraries(core_library Eigen3::Eigen)