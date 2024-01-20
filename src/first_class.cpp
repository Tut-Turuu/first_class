#include "first_class.hpp"




Parallelogram::Parallelogram() : a(10), b(10), sin(1) {};

Parallelogram::Parallelogram(double a, double b, double sin) : a(a), b(b), sin(sin) {};

double Parallelogram::get_perimetr() {
    return (a+b)*2;
}

double Parallelogram::get_square() {
    return a*b*sin;
}