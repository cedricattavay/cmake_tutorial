# Define the source code you want to build
# It makes it easier to search for all source 
# .h
# .cpp
# https://cmake.org/cmake/help/v3.18/command/file.html
# This function will search for all header and source files
# The list of files will be stored in a variable *header_list* and *source_list*
file( GLOB_RECURSE header_list *.h* )
file( GLOB_RECURSE source_list *.cpp )

# Define your include directories
# In this example I would use the current directory as include directory
# To do this, I used the CMake function *include_directories* and the CMake variable *${CMAKE_CURRENT_SOURCE_DIR}*
# *${CMAKE_CURRENT_SOURCE_DIR}* content is depending from which CMakeLists.txt we are:
# In our example: ${CMAKE_CURRENT_SOURCE_DIR} will return the parent directory of the current *CMakeLists.txt*
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

# Create an executable
# CMake allows to create 2 kind of target - target means output: 
# - executable (*add_executable*, https://cmake.org/cmake/help/latest/command/add_executable.html) 
# - library (*add_library*, https://cmake.org/cmake/help/latest/command/add_library.html) 
# Whatever the kind of output, you must define the target name. This name will be reuse in all other project:
# e.g: *myExe* will be the name of our target
add_executable( myExe ${header_list} ${source_list})