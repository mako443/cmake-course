cmake_minimum_required(VERSION 3.0.0)

project(FindStuff)

# See lecture 43 for more options
find_library(my_lib libopencv_core.so HINTS /usr/local)
message("Lib: ${my_lib}")

# find_path() output only contains the dir, w/o the filename!
find_path(my_path coreXX.hpp
    HINTS /usr/local/include/opencv4/opencv2/)
message("Path: ${my_path}")

# See lecture 44 for more finding options and writing a FindXX.cmake file