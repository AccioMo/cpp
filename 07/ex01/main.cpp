
#include "iter.hpp"
#include <iostream>

void f(double &i) {
    i += 1;
}

int main(void) {

    double array[5] = {1, 2, 3, 4, 5};

    std::cout << "Array before iter: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    ::iter(array, 5, f);

    std::cout << "Array after iter: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    return (0);
}
