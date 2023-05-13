cmake_minimum_required(VERSION 3.24)
project(fusionc)

set(CMAKE_CXX_STANDARD 20)
set(ANTLR4_CPP_RUNTIME_DIR "/opt/homebrew/opt/antlr4-cpp-runtime" CACHE PATH "ANTLR4 C++ runtime library directory")

add_library(antlr4-runtime SHARED IMPORTED)

set_target_properties(antlr4-runtime PROPERTIES
    IMPORTED_LOCATION "${ANTLR4_CPP_RUNTIME_DIR}/lib/libantlr4-runtime.dylib"
    INTERFACE_INCLUDE_DIRECTORIES "${ANTLR4_CPP_RUNTIME_DIR}/include/antlr4-runtime"
)

add_executable(fusionc fusionc.cpp)
target_link_libraries(fusionc antlr4-runtime)