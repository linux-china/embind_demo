cmake_minimum_required(VERSION 3.15)
project(embind_demo)

set(CMAKE_CXX_STANDARD 14)

set(emscripten_dir "/usr/local/opt/emscripten")

add_definitions(-std=c++14 -O3)

include_directories("${emscripten_dir}/libexec/system/include")

# browser
add_executable(a wasm-module1.cpp reactive.cpp)
set_target_properties(a PROPERTIES LINK_FLAGS "--bind -s ERROR_ON_UNDEFINED_SYMBOLS=0 --js-library  ${CMAKE_SOURCE_DIR}/library.js")

# node backend module
add_executable(a_node wasm-module1.cpp reactive.cpp)
set_target_properties(a_node PROPERTIES LINK_FLAGS "--bind -s ERROR_ON_UNDEFINED_SYMBOLS=0 --js-library  ${CMAKE_SOURCE_DIR}/library.js -O2 -s WASM=1 -Wall -s MODULARIZE=1 -o a-node.js")

# webidl
add_executable(hello hello.cpp glue_wrapper.cpp)
set_target_properties(hello PROPERTIES LINK_FLAGS " -std=c++1y --post-js ${CMAKE_SOURCE_DIR}/glue.js")

