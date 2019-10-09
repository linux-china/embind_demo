cmake_minimum_required(VERSION 3.15)
project(embind_demo)

set(CMAKE_CXX_STANDARD 14)

set(emscripten_dir "/usr/local/Cellar/emscripten/1.38.44")

add_definitions(-std=c++14 -O3)

include_directories("${emscripten_dir}/libexec/system/include")

add_executable(a wasm-module1.cpp wasm-module1.h)

set_target_properties(a PROPERTIES LINK_FLAGS "--bind")
