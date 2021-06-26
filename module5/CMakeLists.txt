cmake_minimum_required(VERSION 3.0.0)

set(VAR "maybe")
if(VAR) # if() de-references one more time
    message("yes")
else()
    message("no")
endif()

set(NAME Alice)
if(DEFINED NAME)
    message("Name yes")
else()
    message("Name no")
endif()

if(COMMAND target_link_libraries)
    message("Command yes")
else()
    message("Command no")
endif()

if( EXISTS ./CMakeLists.txt )
    message("File yes")
else()
    message("File no")
endif()

set(VAR a)
while(NOT VAR STREQUAL "aaaaaa")
    set(VAR ${VAR}a)
    message(${VAR})
endwhile()

message("----")
foreach(NAME ALica Bob Charlie)
    message(${NAME})
endforeach()

message("----")
function(print_detail NAME)
    message("My name is ${NAME}")
endfunction()
print_detail(Guido)

message("----")
function(print_detail NAME)
    message("My name is ${NAME}")
    if(DEFINED ARGV1)
        message("...and ${ARGV1}")
    endif()
endfunction()
print_detail(Guido Muido)

message("----")
set(VAR firstName)
function(change_name)
    set(VAR lastName PARENT_SCOPE) # Does not change it in function scope
endfunction()
change_name()
message("Name: ${VAR}")
# NOTE: add_subdirectory also creates a sub-dir scope
# NOTE: macro(...) runs w/o a separate scope and its arguments are just string-replaced