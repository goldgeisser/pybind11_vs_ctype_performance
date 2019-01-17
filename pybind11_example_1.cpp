#include <pybind11/pybind11.h>

#include "example_1.h"

example_1::StatusCode addAPI(const std::vector<size_t>& A,  const std::vector<size_t>& B, std::vector<size_t>& C) {
  return example_1::add(A, B, C);
}

namespace py = pybind11;

PYBIND11_MODULE(libmy_vector_add, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &addAPI, "A function which adds two numbers");
}
