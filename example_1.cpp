#include <vector>
#include <algorithm>

#include "example_1.hpp"

//...Implement specialization
namespace example_1 {
  //...LG: could not get the specialization to work, using a wrapper instead.
  // template<> 
  // StatusCode add<std::vector<size_t> >(const std::vector<size_t>&,  const std::vector<size_t>&, std::vector<size_t>&);
  
  StatusCode addAPI(const std::vector<size_t>& A,  const std::vector<size_t>& B, std::vector<size_t>& C) {
    return add(A, B, C);
  }

  std::vector<size_t> addAPI(const std::vector<size_t>& A,  const std::vector<size_t>& B) {
    std::vector<size_t> C;
    addAPI(A, B, C);
    return C;
  }
}
