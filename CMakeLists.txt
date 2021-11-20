cmake_minimum_required(VERSION 3.16.3)

project(MY_FIRST_CMAKE)
enable_testing()
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(${PROJECT_NAME} adder substract) 
# writing adder here because the same library name was given in the CMakeLists.txt in add_library inside src

target_include_directories(${PROJECT_NAME} PUBLIC src)
# target_include_directories called with invalid arguments -> This error means that make it PUBLIC or PRIVATE
# Using this we are able to write <adder.h> directly otherwise we need to specify paths
