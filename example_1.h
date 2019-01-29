namespace example_1 {
  
  enum class StatusCode : size_t {
    mSUCCESS,
      mERROR
      };
  
  template<typename T>
    StatusCode add(const T& A, const T& B, T& C);
  
  StatusCode addAPI(const std::vector<size_t>& A,  const std::vector<size_t>& B, std::vector<size_t>& C);

  std::vector<size_t> addAPI(const std::vector<size_t>& A,  const std::vector<size_t>& B);

} 

void foo();
example_1::StatusCode add(const size_t* A, const size_t* B, size_t size, size_t* C);

extern "C" void foo_c();
extern "C" example_1::StatusCode add_c(const size_t* A, const size_t* B, size_t size, size_t* C);

//...dummy implementation, seems ctype cannot resolve namespaces
