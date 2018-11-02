cmake_minimum_required(VERSION 3.8)
project(CplusplusCodeLib)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp  TemplateTest.h TemplateTest.hpp LambdaTest.h PureStorageMultiThread.h ChangeSizePara.h)
add_executable(CplusplusCodeLib ${SOURCE_FILES})
