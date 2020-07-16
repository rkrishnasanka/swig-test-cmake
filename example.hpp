#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include <vector>

int fact(int n);
void print_vector();

std::vector<int> ret_vector();

void pass_print_vector(std::vector<int> array);

class Shape{
    public:
        Shape();
        Shape(int x, int y);
        ~Shape();
        double x, y;
        void move(double dx, double dy);
        double area();
        double perimeter();
        void print_shape();

        static void print_shape_vector(std::vector<Shape> shape_array);
};


#endif