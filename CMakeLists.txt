cmake_minimum_required(VERSION 3.1)

project(example VERSION 1.0
                  DESCRIPTION "SWIG Cmake Example"
                  LANGUAGES CXX)

add_library(example SHARED example.cpp example.hpp)

target_compile_features(example PUBLIC cxx_std_11)
