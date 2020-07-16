%module example

%include "typemaps.i"
%include "std_vector.i"

%{
#define SWIG_FILE_WITH_INIT
#include "example.hpp"
%}

%template(IntVector) std::vector<int>;
%template(ShapeVector) std::vector<Shape>;

%include "example.hpp"