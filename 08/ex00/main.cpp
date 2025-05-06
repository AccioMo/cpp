
#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    try {
        std::cout << "found " << *easyfind(vec, 3) << " in vector" << std::endl;
        std::cout << "found " << *easyfind(vec, 1) << " in vector" << std::endl;
        std::cout << "looking for 10 in vector: ";
        std::cout << *easyfind(vec, 10) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "alas, " << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    try {
        std::cout << "found " << *easyfind(lst, 30) << " in list" << std::endl;
        std::cout << "looking for 15 in list: ";
        std::cout << *easyfind(lst, 15) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "alas, " << e.what() << std::endl;
    }

    return (0);
}
