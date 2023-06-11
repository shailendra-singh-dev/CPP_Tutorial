/*
 * max_consecutive_states.cpp
 *
 *  Created on: Jul 15, 2024
 *      Author: shailendra
 */


#include <iostream>
#include <cstdint>

int max_consecutive_states(uint32_t switches_states, int state) {
    if (state < 0 || state > 3) {
        return 0; // Invalid state
    }

    int max_count = 0;
    int current_count = 0;

    for (int i = 0; i < 16; ++i) { // The loop runs a constant 16 times
        // Extract the state of the i-th switch (2 bits for each switch)
        int switch_state = (switches_states >> (2 * i)) & 0x3; // Constant time operation

        if (switch_state == state) {
            current_count++;
            if (current_count > max_count) {
                max_count = current_count;
            }
        } else {
            current_count = 0;
        }
    }

    return max_count;
}

// Example usage
int max_consecutive_states_main() {
    // Test cases
    std::cout << "Max consecutive 0s: " << max_consecutive_states(0xcafec001, 0) << std::endl; // Expected output: 6
    std::cout << "Max consecutive 1s: " << max_consecutive_states(0xcafec001, 1) << std::endl; // Expected output: 1
    std::cout << "Max consecutive 2s: " << max_consecutive_states(0xcafec001, 2) << std::endl; // Expected output: 2
    std::cout << "Max consecutive 3s: " << max_consecutive_states(0xcafec001, 3) << std::endl; // Expected output: 3
    std::cout << "Max consecutive 0s: " << max_consecutive_states(0xffffffff, 0) << std::endl; // Expected output: 0

    return 0;
}


