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
