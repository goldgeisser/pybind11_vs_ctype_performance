# pybind11_vs_ctype_performance


mkdir build
cd build
cmake <-DPYBIND11_INCLUDE_DIR=<LOCATION of pybind install> > <-DPYTHON_INCLUDE=/usr/include/python3.6m> ..
make
./example_1


python3.6-config --extension-suffix
.cpython-36m-x86_64-linux-gnu.so

it is currently compiled with python3.6

