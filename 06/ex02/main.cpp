
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

Base *generate(void) {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int random = std::rand() % 3;

    switch (random) {
        case 0:
            std::cout << "Generating A" << std::endl;
            return (new A());
        case 1:
            std::cout << "Generating B" << std::endl;
            return (new B());
        case 2:
            std::cout << "Generating C" << std::endl;
            return (new C());
        default:
            std::cout << "Something bad happened" << std::endl;
            return (new Base());
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "unknown type" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::exception&) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (std::exception&) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            } catch (std::exception&) {
                std::cout << "unknown type" << std::endl;
            }
        }
    }
}

int main() {
    Base base;
    Base* basePtr = generate();
    identify(basePtr);
    identify(*basePtr);

    delete basePtr;
    return (0);
}
