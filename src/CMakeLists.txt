add_executable(indiv5_test_prog main.cpp)

add_subdirectory(supp_func)

target_link_libraries(indiv5_test_prog
  PRIVATE
    indiv_func
    seq_class
    menu_class
    supp_func
  )