cmake_minimum_required(VERSION 3.0.0)

project(GTK_PC)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0) # "GTK3" is just a prefix for the var-name that is used in the later lines

add_executable(${PROJECT_NAME}_app main.cpp)

target_include_directories(${PROJECT_NAME}_app PRIVATE ${GTK3_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME}_app PRIVATE ${GTK3_LIBRARIES})

# Use target_link_directories(...) to add a directory, then add libs w/o paths in target_link_libraries()