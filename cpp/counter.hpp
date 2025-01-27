#pragma once

extern "C" {
    struct Counter {
        int value;
    };
    
    int read_counter(const Counter* counter);
} 