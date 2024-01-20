#include "first_class.hpp"
#include <iostream>
#include <cmath>





Parallelogram::Parallelogram(double a, double b, double angle) : a(a), b(b), sin(std::sin(angle*3.1415/360.0)) {};

double Parallelogram::get_perimetr() {
    return (a+b)*2;
}

double Parallelogram::get_square() {
    return a*b*sin;
}

void Parallelogram::print_info() {
    std::cout << "perimetr: " << get_perimetr() << " square: " << get_square() << '\n';
}