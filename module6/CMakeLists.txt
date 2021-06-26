cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory(my_math)
add_subdirectory(my_print)

add_executable(calculator
main.cpp)

target_link_libraries(calculator PRIVATE my_math my_print)

set(A 000)
set(A "123" CACHE STRING "Set variable A in cache.")
message(${A})
message($CACHE{A})
message("----")

