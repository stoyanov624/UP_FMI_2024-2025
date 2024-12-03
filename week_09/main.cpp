#include <iostream>

void increment(int* num) {
    *num += 1;
}

void incrementByReference(int& num) {
    num++;
}

void incrementNoob(int num) {
    num++;
}

void fillArr(int* arr, int lenght) {
    for (int i = 0; i < lenght; i++) {
        std::cin >> arr[i];
    }
}

void printArr(const int* arr, int lenght) {
    for (int i = 0; i < lenght; i++) {
        std::cout << arr[i];
    }
}

void swap (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortArr(int* arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }  
    }
}

int main() {
    int num = 5;
    int* ptr = &num;

    int& num1 = num;
    // std::cout << &num << std::endl;
    // std::cout << *ptr;

    // *ptr = 6;

    int arr[5] = {7, 3, 1, 8, 6};

    sortArr(arr, 5);
    printArr(arr, 5);


}
