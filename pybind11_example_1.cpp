#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>

#include "example_1.h"
namespace py = pybind11;
//PYBIND11_MAKE_OPAQUE(std::vector<size_t>);

// example_1::StatusCode addAPI(const std::vector<size_t>& A,  const std::vector<size_t>& B, std::vector<size_t>& C) {
//   return example_1::add(A, B, C);
// }


PYBIND11_MODULE(libmy_vector_add, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("add", (example_1::StatusCode (*)(const std::vector<size_t>& A,  const std::vector<size_t>& B, std::vector<size_t>& C) ) &example_1::addAPI, "A function which adds two numbers and returns the result by reference");
    m.def("add", (std::vector<size_t> (*)(const std::vector<size_t>& A,  const std::vector<size_t>& B) ) &example_1::addAPI, "A function which adds two numbers and return the result");
    
    
    py::enum_<example_1::StatusCode>(m, "StatusCode") //, py::arithmetic())
	      .value("SUCCESS", example_1::StatusCode::mSUCCESS)
	      .value("ERROR", example_1::StatusCode::mERROR)
	      .export_values();
   

    //    py::bind_vector<std::vector<size_t>>(m, "VInt");

}

