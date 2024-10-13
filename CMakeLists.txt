cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(SpatialPartitionLib)

# Executable
add_executable(${PROJECT_NAME} main.cpp)

# Add libraries
add_subdirectory(spatial-hashing)
target_link_libraries(${PROJECT_NAME} spatial-hashing)