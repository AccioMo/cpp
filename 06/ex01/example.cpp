
#include <iostream>
#include <string>

class A {
public:
    A() {}
    A(const A &src) {
        *this = src;
    }
    virtual ~A() {}
    A &operator=(const A &rhs) {
        if (this == &rhs) {
            return *this;
        }
        return *this;
    }
};

class B: public A {
public:
    B() {}
    B(const B &src) : A(src) {
        *this = src;
    }
    ~B() {}
    B &operator=(const B &rhs) {
        if (this == &rhs) {
            return *this;
        }
        return *this;
    }
};

int main() {

    float num = 2.55;
    std::cout << static_cast<int>(num) << std::endl;

    A *child = new B();
    B *actual_child = dynamic_cast<B *>(child);
    (void)actual_child;

    return 0;
}
