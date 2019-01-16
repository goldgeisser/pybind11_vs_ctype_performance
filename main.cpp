#include <iostream>
#include <vector>

//#include "example_1.hpp"
#include "example_1.h"
using namespace std;


int main(int argc, char* argv[]) {
  cout << "example 1" << endl;  
  size_t length = stol(argv[1]);
  vector<size_t> A(length, 1);
  vector<size_t> B(length, 2);

  vector<size_t> C;

//example_1::add(A, B, C);
example_1::addAPI(A, B, C);

  for (auto i: C) {
    cout << i ;
  }
  cout << endl;

}
