cmake_minimum_required(VERSION 3.0.0)

project(DisplayImage VERSION 1.0.0)

find_package(OpenCV REQUIRED)

add_executable(DisplayImage main.cpp)

target_include_directories(DisplayImage PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(DisplayImage PRIVATE ${OpenCV_LIBS})

message("INCLUDE: ${OpenCV_INCLUDE_DIRS}")
message("LIBS: ${OpenCV_LIBS}")