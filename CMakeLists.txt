cmake_minimum_required(VERSION 3.18)

# Should be the 1st line of your 1st CMakeLists.txt
# Here we create a CMake project. 
# A CMake project will be made up of many targets
project( "sample" VERSION 1.0.0 )

# Here to do all the stuff which are common to app & lib

# Each subdirectory should contain a CMakeLists.txt
add_subdirectory( extLib )
add_subdirectory( app )
add_subdirectory( lib )

# If you set variable here, there will be ignored by subdirectory
# You should always define the variable you want to use in a sub project before to call its 'add_subdirectory'