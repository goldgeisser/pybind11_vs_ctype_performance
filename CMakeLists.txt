
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
# The version of CMake which is not compatible with the old CUDA CMake commands.
set(CMAKE_VERSION_THRESHOLD "3.10.0")

set(CMAKE_CXX_STANDARD 11)

set(EXAMPLE_SOURCES
  example_1.cpp
)

set(PYB11_EXAMPLE_SOURCES
  pybind11_example_1.cpp
)


set(HEADERS
  example_1.h
  example_1.hpp
)

set(MAIN_SOURCES
  main.cpp
)


find_path(PYBIND11_INCLUDE_DIR pybind11.h
  HINTS ${PYBIND11_ROOT} 
PATH_SUFFIXES include)

message("LG_DEBUG: found PYBIND11_INCLUDE_DIR in  ${PYBIND11_INCLUDE_DIR}")

find_path(PYTHON_DEV_PATH_INCLUDE_DIR Python.h
  HINTS ${PYTHON_INCLUDE} )


message("LG_DEBUG: PYTHON_DEV_PATH_INCLUDE_DIR found  in  ${PYTHON_DEV_PATH_INCLUDE_DIR}")

set(PYTHON_LIB_EXTENSION_SUFFIX ".cpython-36m-x86_64-linux-gnu")


set(PYB11_MY_VECTOR_ADD_LIB "my_vector_add${PYTHON_LIB_EXTENSION_SUFFIX}")

add_library(my_vector_add SHARED ${EXAMPLE_SOURCES})
#target_include_directories(nvonnxparser_runtime PUBLIC ${CUDA_INCLUDE_DIRS} ${TENSORRT_INCLUDE_DIR} ${CUDNN_INCLUDE_DIR})
#target_link_libraries(nvonnxparser_runtime PUBLIC nvonnxparser_plugin ${CUDNN_LIBRARY} ${TENSORRT_LIBRARY})

add_library(${PYB11_MY_VECTOR_ADD_LIB} SHARED ${PYB11_EXAMPLE_SOURCES})
target_include_directories(${PYB11_MY_VECTOR_ADD_LIB} PUBLIC ${PYBIND11_INCLUDE_DIR} ${PYTHON_DEV_PATH_INCLUDE_DIR})
target_link_libraries(${PYB11_MY_VECTOR_ADD_LIB} PUBLIC my_vector_add)


add_executable(example_1 ${MAIN_SOURCES})
#target_include_directories(onn PUBLIC ${ONNX_INCLUDE_DIRS} ${CUDNN_INCLUDE_DIR})

target_link_libraries(example_1 PUBLIC my_vector_add)
