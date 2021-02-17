cmake_minimum_required(VERSION 3.16.3)

project(cmake-c-project VERSION 1.0.0 LANGUAGES C)

include(CTest)

add_subdirectory(libs)
add_subdirectory(app)