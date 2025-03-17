cmake_minimum_required(VERSION 3.10)

# Set the project name
project(OpenCVExample)

#Find OpenCV Package
find_package(OpenCV REQUIRED)

# Include directories from OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})

# Add the executable
add_executable(OpenCVExample open_cv_test.cpp)

# Link OpenCV
target_link_libraries(OpenCVExample ${OpenCV_LIBS})