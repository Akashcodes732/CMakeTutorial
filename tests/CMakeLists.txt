add_subdirectory(/usr/src/gtest ${PROJECT_BINARY_DIR}/gtest)

include(CTest)

set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY} test_adder.cpp test_substract.cpp)

target_link_libraries(${TEST_BINARY} adder ${TOOLS} gtest gtest_main)
target_link_libraries(${TEST_BINARY} substract ${TOOLS} gtest gtest_main)
target_include_directories(${PROJECT_NAME} PUBLIC src)


add_test(
    NAME ${TEST_BINARY}
    COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY})