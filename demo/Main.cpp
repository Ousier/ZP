/*
 * @Description:  demo
 * @Autor: Ousi
 * @Date: 2023-08-30 16:44:07
 * @LastEditors: Ousi
 * @LastEditTime: 2023-08-30 16:56:05
 */
#include <iostream>

void log(const char* message) {
    std::cout << message << std::endl;
}

int main() {
    log("Hello World!");
    std::cin.get();

    return 0;
}