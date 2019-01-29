import libmy_vector_add as mylib

#                    1000,000
#vect_size = 1e6
vect_size = 1e1

A = [i for i in range(int(vect_size))]
B = [i*10 for i in range(int(vect_size))]

C = []

print("A=",A)
print("B=",B)
S = mylib.add(A, B)
print("pybind11: S=",S)

status = mylib.add(A, B, C)


import ctypes
_add = ctypes.CDLL('/home/lgoldgeisser/WORK/py_bind_demo/example_1/pybind11_vs_ctype_performance/build/libmy_vector_add.so')

def p_add(A, B, C):
    C = [x + y for x, y in zip(A, B)]
    return C


import numpy as np

nA = np.array(A)
nB = np.array(B)

nS = mylib.add(nA, nB)


