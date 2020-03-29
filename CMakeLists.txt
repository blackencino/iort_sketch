# CMakeLists files in this project can
# refer to the root source directory of the project as ${FURY_SOURCE_DIR} and
# to the root binary directory of the project as ${FURY_BINARY_DIR}.
cmake_minimum_required(VERSION 3.11.2)

project(iort CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Packages
#find_package(whatever REQUIRED)
find_package(Threads REQUIRED)

add_subdirectory(Common)
add_subdirectory(Maths)
add_subdirectory(Raytracer)

