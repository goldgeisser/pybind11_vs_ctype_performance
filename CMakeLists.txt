
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
# The version of CMake which is not compatible with the old CUDA CMake commands.
set(CMAKE_VERSION_THRESHOLD "3.10.0")

set(CMAKE_CXX_STANDARD 11)

set(EXAMPLE_SOURCES
  example_1.cpp
)

set(HEADERS
  example_1.h
  example_1.hpp
)

set(MAIN_SOURCES
  main.cpp
)


add_library(my_vector_add SHARED ${EXAMPLE_SOURCES})
#target_include_directories(nvonnxparser_runtime PUBLIC ${CUDA_INCLUDE_DIRS} ${TENSORRT_INCLUDE_DIR} ${CUDNN_INCLUDE_DIR})
#target_link_libraries(nvonnxparser_runtime PUBLIC nvonnxparser_plugin ${CUDNN_LIBRARY} ${TENSORRT_LIBRARY})


add_executable(example_1 ${MAIN_SOURCES})
#target_include_directories(onn PUBLIC ${ONNX_INCLUDE_DIRS} ${CUDNN_INCLUDE_DIR})

target_link_libraries(example_1 PUBLIC my_vector_add)
