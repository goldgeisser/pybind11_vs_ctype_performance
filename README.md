# pybind11_vs_ctype_performance


1) The example depends on the installation of pybind11
git clone https://github.com/pybind/pybind11.git

2) pybind test depends on the installation of pytest
pip install pytest --user

3)
compiling with pybind11 depends on the python developer libraries installed
    sudo yum install python-devel
or
    sudo apt-get install python-dev


4) Clone the prototype repository
git clone https://github.com/goldgeisser/pybind11_vs_ctype_performance.git

5) Building the example (it is currently compiled with python3.6)
cd pybind11_vs_ctype_performance

mkdir build
cd build
cmake <-DPYBIND11_INCLUDE_DIR=<LOCATION of pybind install> > <-DPYTHON_INCLUDE=/usr/include/python3.6m> ..
make


6) Running a stand alone example:
./example_1 <length or cotainers to add>

The first container is filled with ones, the second with "2. The resulting sum container needs to be filled with "3".

For example
[lgoldgeisser@localhost build]$ ./example_1 10
example 1
3333333333




7) Running python example:
There is a file example_1.py demonstrating the python usage. Both python lists and numpy input arguments are demonstrated.

Most interesting, try to do 


help(mylib)

You will be impressed with the result.


Yet to do:

A) measure performance
B) Provide output as numpy.





Misc)


python3.6-config --extension-suffix
.cpython-36m-x86_64-linux-gnu.so
