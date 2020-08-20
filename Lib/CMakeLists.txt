cmake_minimum_required(VERSION 3.16)

add_library(MyLib SHARED mylib.ti.cpp mylib.h mylib.cpp)
target_include_directories(MyLib PUBLIC "./")
target_compile_features(MyLib PUBLIC cxx_std_11)