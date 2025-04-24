
#include "Array.hpp"
#include <iostream>

int main(void) {

    Array<int> arr(5);
    Array<int> arr2(arr);
    Array<int> arr3;
    arr3 = arr2;

    for (unsigned int i = 0; i < arr.size(); i++) {
        arr[i] = i;
    }
    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }

    return (0);
}
