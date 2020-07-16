cmake_minimum_required(VERSION 3.1)

project(example VERSION 1.0
                  DESCRIPTION "SWIG Cmake Example"
                  LANGUAGES CXX)


#Adding the current folder into the includes so that the compiled binary will find 
#the corresponding headers when I run it through the swig section

include_directories(".")

#Workgin compilation of the shared library

add_library(example_corelib SHARED example.cpp example.hpp)

target_compile_features(example_corelib PUBLIC cxx_std_11)

#SWIG stuff:
#load the cmake SWIG package
find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

#Set the swig language
set_property(SOURCE example.i PROPERTY CPLUSPLUS ON)

#load the package that SWIG uses to generate Python
find_package(PythonLibs)

#point to python headers
include_directories(${PYTHON_INCLUDE_DIRS} LANGUAGE python)

#tell SWIG to create a new module, called example, 
#in Python and point to the SWIG interface file (the .i file)
swig_add_library(example LANGUAGE python SOURCES example.i)

swig_link_libraries(example example_corelib)

swig_link_libraries(example ${PYTHON_INCLUDE_DIRS})



