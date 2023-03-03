add_executable(indiv5_test_prog main.cpp)

add_subdirectory(matrix_class)
add_subdirectory(supp_func)

target_link_libraries(indiv5_test_prog
  PRIVATE
    matrix_class
    supp_func
  )