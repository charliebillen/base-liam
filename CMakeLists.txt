cmake_minimum_required(VERSION 3.27)
project(base-liam C)

set(CMAKE_C_STANDARD 11)

add_library(encoder src/encoder.c src/encoder.h)

add_executable(liamify src/liamify.c)
target_link_libraries(liamify PRIVATE encoder)

add_executable(unliamify src/unliamify.c)
target_link_libraries(unliamify PRIVATE encoder)

add_executable(encoder_tests test/encoder.c)
target_link_libraries(encoder_tests PRIVATE encoder)

enable_testing()

add_test(
    NAME encoder_tests
    COMMAND $<TARGET_FILE:encoder_tests>
)
