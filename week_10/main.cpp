#include <iostream>

int main() {

    int number = 5;
    int* a = &number;
    *a = 6;

    std::cout << a << std::endl;
    std::cout << number;
}