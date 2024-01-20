#include <iostream>
#include "first_class.hpp"


int main() {

    Parallelogram abcd(10, 20, 0.5);

    std::cout << abcd.get_perimetr() << ' ' << abcd.get_square() << '\n';
    
}