#include "counter.hpp"
#include <thread>
#include <chrono>
#include <iostream>

int main() {
    Counter counter = {0};  // 초기값 0
    
    while (true) {
        counter.value++;    
        std::cout << "C++: 카운터 증가: " << counter.value << std::endl;
        
        // Rust 함수 호출 및 에러 체크
        int result = read_counter(&counter);
        if (result == -1) {
            std::cerr << "에러: Rust 함수 호출 실패" << std::endl;
            break;
        }
        
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    return 0;
} 