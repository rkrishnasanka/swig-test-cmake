#include "example.hpp"

#include <iostream>
#include <vector>

using namespace std;

int fact(int n){
    // cout << "Input value: " << n << endl ;
    if(n <= 1){
        return 1;
    } else {
        return n*fact(n-1);
    }
}

void print_vector(){
    vector<int> array(3);
    array[0] = 1;
    array[1] = 10;
    array[2] = 100;
    for(int i = 0; i<3; i++){
        cout<<"Value: " << array[i] << endl;
    }
}

vector<int> ret_vector(){
    vector<int> array(3);
    array[0] = 1;
    array[1] = 10;
    array[2] = 100;
    return array;
}

void pass_print_vector(std::vector<int> array){
    cout<<"Printing Values of the array:" << endl;
    for(int i = 0; i<3; i++){
        cout<<"Value: " << array[i] << endl;
    }
}

void Shape::move(double dx, double dy){
    cout << "Move shape to - dx: " << dx << " dy: " << dy << endl;
}

double Shape::area(){
    return 500;
}

double Shape::perimeter(){
    return 555;
}

Shape::Shape(){
    cout << "Running \'Shape\' the constructor" << endl;
}

Shape::Shape(int argx, int argy){
    x = argx;
    y = argy;
}

Shape::~Shape(){
    cout << "Running \'Shape\' the destructor" << endl;
}

void Shape::print_shape(){
    cout << "Printing the shape: " << endl;
    cout << "x - " << x << endl;
    cout << "y - " << y << endl;
}