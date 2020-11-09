cmake_minimum_required(VERSION 2.8.9)

SET(TARGET Example)

add_definitions(-DRESOURCE_DIR=\"./resources\")


PROJECT(${TARGET})


#Bring the headers, into the project
include_directories(include)

# Declare all source files the target consists of:
file(GLOB _files source/*.cc )

#Generate the shared library from the sources
add_library(testLib SHARED source/test_lib.cc)

add_executable(${TARGET}  source/main.cc)
target_link_libraries(${TARGET}  testLib)


if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/tests )
    enable_testing()
    find_package(GTest REQUIRED)
    include_directories(${GTEST_INCLUDE_DIR})
    ADD_SUBDIRECTORY(tests)
endif()




