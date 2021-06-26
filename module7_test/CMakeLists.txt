cmake_minimum_required(VERSION 3.0.0)

project(MY_MATH_TEST VERSION 1.0.0)

find_package(my_math CONFIG) # Module mode searches in CMAKE_MODULE_PATH, Config mode under CMAKE_INSTALL_PREFIX

if(my_math_FOUND)
    message("my_math found.")
    add_executable(calc main.cpp)
    add_definitions(-Dcmake_var="var123")

    target_link_libraries(calc my_math)
else()
    message(FATAL_ERROR "my_math lib not found.")
endif()
