cmake_minimum_required(VERSION 3.14)
project(feature_matching_opencv)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Define all related .cpp files
set(all_additional_srcs handleVideoStreams.cpp
                        opencvHelpers.cpp)

add_executable(feature_matching_opencv  ${all_additional_srcs}
                                        main.cpp)

target_link_libraries(feature_matching_opencv ${OpenCV_LIBS})