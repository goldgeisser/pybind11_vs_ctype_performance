#include <vector>
#include <algorithm>
#include "example_1.h"

#include <iostream>

namespace example_1 {

  
  template<typename T>
  StatusCode add(const T& A, const T& B, T& C) {
    //...LG: ToDo: try to use an exception here, and propagate to caller function
    if (A.size() != B.size()) {
      return StatusCode::mERROR;
    }
#if DEBUG    
    std::cout << "A: ";
    for(auto a : A)
      std::cout << a;
    std::cout << std::endl;
#endif
    C.reserve(A.size());
    std::transform(A.begin(), A.end(), B.begin(), std::back_inserter(C), std::plus<typename T::value_type>());

#if DEBUG    
    std::cout << "C: ";
    for(auto c : C)
      std::cout << c;
    std::cout << std::endl;
#endif
  }


  
} // end namespace example_1
