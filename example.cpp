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

