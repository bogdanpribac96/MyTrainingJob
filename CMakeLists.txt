cmake_minimum_required(VERSION 4.2)
project(MyTrainingCode VERSION 1.0.0)


include_directories(Helper)
add_subdirectory(Helper)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} Helper)