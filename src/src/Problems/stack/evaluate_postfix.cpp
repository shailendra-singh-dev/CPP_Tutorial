/*
 * evaluate_postfix.cpp
 *
 *  Created on: Jul 14, 2024
 *      Author: shailendra
 */

#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>

enum FuncStatus_t {
    SUCCESS,
    FAILURE
};

FuncStatus_t evaluate_postfix(const size_t postfix_size, const std::string postfix[], int32_t *result) {
    if (postfix_size == 0 || result == nullptr) {
        return FAILURE;
    }

    std::stack<int32_t> stack;

    try {
        for (size_t i = 0; i < postfix_size; ++i) {
            const std::string& token = postfix[i];

            if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
                // Token is an operand
                stack.push(std::stoi(token));
            } else if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Token is an operator
                if (stack.size() < 2) {
                    return FAILURE; // Invalid expression
                }

                int32_t b = stack.top();
                stack.pop();
                int32_t a = stack.top();
                stack.pop();

                if (token == "+") {
                    stack.push(a + b);
                } else if (token == "-") {
                    stack.push(a - b);
                } else if (token == "*") {
                    stack.push(a * b);
                } else if (token == "/") {
                    if (b == 0) {
                        return FAILURE; // Division by zero
                    }
                    stack.push(a / b);
                }
            } else {
                return FAILURE; // Invalid token
            }
        }

        if (stack.size() != 1) {
            return FAILURE; // Invalid expression
        }

        *result = stack.top();
        return SUCCESS;
    } catch (const std::exception& e) {
        return FAILURE; // Catch any exception and return failure
    }
}

// Example usage
int evaluate_postfix_main() {
    const std::string postfix[] = {"2", "1", "+", "3", "*"};
    int32_t result;

    if (evaluate_postfix(5, postfix, &result) == SUCCESS) {
        std::cout << "Result: " << result << std::endl; // Expected output: 9
    } else {
        std::cout << "Invalid postfix expression." << std::endl;
    }

    return 0;
}
