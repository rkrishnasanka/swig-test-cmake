#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include <vector>

int fact(int n);
void print_vector();

std::vector<int> ret_vector();

class Shape{
    public:
        Shape();
        ~Shape();
        double x, y;
        void move(double dx, double dy);
        double area();
        double perimeter();
};


#endif