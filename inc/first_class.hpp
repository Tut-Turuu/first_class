#pragma once

class Parallelogram {
    
    double a;
    double b;
    double sin;

public:

    Parallelogram();

    Parallelogram(double a, double b, double sin);

    ~Parallelogram() = default;

    double get_square();

    double get_perimetr();


};