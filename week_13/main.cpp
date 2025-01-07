#include <iostream>

int* create(int newElement, int& size, int capacity) {
    int* arr = new int[capacity];
    size = 1;
    
    arr[0] = newElement;

    return arr;
}

void resize(int*& arr, int size, int& capacity) {
    capacity *= 2;
    int* tempArr = new int[capacity];

    for (size_t i = 0; i < size; i++) {
        tempArr[i] = arr[i];
    }

    delete[] arr; // Free the old array's memory
    arr = tempArr; // Point arr to the new array
}

void pushBack(int*& arr, int& size, int& capacity, int newElement) {
    if (capacity <= size) {
        resize(arr, size, capacity);
    }
    arr[size++] = newElement;
}

void print(int* arr, int size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* arr = nullptr; // Uninitialized pointer
    int size = 0;
    int capacity = 1;

    arr = create(5, size, capacity);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    pushBack(arr, size, capacity, 6);
    print(arr, size);

    std::cout << size << std::endl;
    std::cout << capacity << std::endl;
    
    if (arr != nullptr) {
        delete[] arr; // Free the memory
    }
}