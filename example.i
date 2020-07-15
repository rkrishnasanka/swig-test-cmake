%module example

%include "typemaps.i"
%include "std_vector.i"

%{
#define SWIG_FILE_WITH_INIT
#include "example.hpp"
%}

%template(IntVector) std::vector<int>;

int fact(int n);
void print_vector();
std::vector<int> ret_vector();