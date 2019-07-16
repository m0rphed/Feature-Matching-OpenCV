cmake_minimum_required(VERSION 3.14)
project(yet_another_test_opencv)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Define all related .cpp files
set(all_additional_srcs opencvHelpers.cpp)

add_executable(yet_another_test_opencv  ${all_additional_srcs}
                                        main.cpp)

target_link_libraries(yet_another_test_opencv ${OpenCV_LIBS})
