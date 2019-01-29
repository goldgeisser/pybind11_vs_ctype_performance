# pybind11_vs_ctype_performance


1) The example depends on the installation of pybind11
git clone https://github.com/pybind/pybind11.git

2)
pip install pytest --user

3)
compiling with pybind11 depends on the python developer libraries installed
sudo yum install python-devel

4)
git clone https://github.com/goldgeisser/pybind11_vs_ctype_performance.git

5)
cd pybind11_vs_ctype_performance.git

mkdir build
cd build
cmake <-DPYBIND11_INCLUDE_DIR=<LOCATION of pybind install> > <-DPYTHON_INCLUDE=/usr/include/python3.6m> ..
make
./example_1


python3.6-config --extension-suffix
.cpython-36m-x86_64-linux-gnu.so

it is currently compiled with python3.6

6)
