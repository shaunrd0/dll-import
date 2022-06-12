cmake_minimum_required(VERSION 3.15)

project (
    #[[NAME]]   Palindrome
    VERSION     1.0
    DESCRIPTION "C++ export to C# for testing if string is palindrome"
    LANGUAGES   CXX
)

add_compile_options("-shared")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../DllImport)
add_library(palindrome SHARED palindrome.cpp)
