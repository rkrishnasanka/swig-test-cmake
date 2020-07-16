#!/usr/bin/env python3

from example import *

print(fact(3))

print_vector()

ret = ret_vector()

print(ret[0])

for i in ret:
    print(i)

s = Shape()
s.area()
s.move(5,6)

pass_print_vector([1,5,9])

arr = []

arr.append(56)
arr.append(65)
arr.append(99)
arr.append(700)

pass_print_vector(arr)

s2 = Shape(69, 666)
s2.print_shape()

Shape.print_shape_vector([s, s2])