#include <vector>
#include <algorithm>
#include "example_1.h"

namespace example_1 {

  
  template<typename T>
  StatusCode add(const T& A, const T& B, T& C) {
    //...LG: ToDo: try to use an exception here, and propagate to caller function
    if (A.size() != B.size()) {
      return StatusCode::mERROR;
    }

    C.reserve(A.size());
    std::transform(A.begin(), A.end(), B.begin(), std::back_inserter(C), std::plus<typename T::value_type>());
  }
  
} // end namespace example_1
