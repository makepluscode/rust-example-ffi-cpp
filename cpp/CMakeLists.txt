cmake_minimum_required(VERSION 3.10)
project(counter_example)

# 실행 파일이 제대로 생성되는지 확인하기 위한 디버그 메시지 추가
message(STATUS "Rust library path: ${CMAKE_SOURCE_DIR}/../target/debug/libmy_counter.so")

add_executable(counter counter.cpp)
target_link_libraries(counter 
    ${CMAKE_SOURCE_DIR}/../target/debug/libmy_counter.so
)