export EMSCRIPTEN_DIR := "/usr/local/Cellar/emscripten/1.38.44"

build:
   mkdir -p dist
   emcc --bind -s ERROR_ON_UNDEFINED_SYMBOLS=0 --js-library library.js -O3 wasm-module1.cpp -o dist/a.out.js

server: build
   open http://127.0.0.1:8000/index.html
   python3 -m http.server

node_build:
   mkdir -p dist
   emcc --bind -s ERROR_ON_UNDEFINED_SYMBOLS=0 --js-library library.js  -O2 -s WASM=1 -Wall -s MODULARIZE=1 -o dist/a_node.js wasm-module1.cpp

node_run: node_build
   node index.js

clean:
   rm -rf dist

generate:
  python3 {{EMSCRIPTEN_DIR}}/libexec/tools/webidl_binder.py hello.idl glue

webidl_build:
  mkdir -p dist
  emcc -std=c++1y hello.cpp glue_wrapper.cpp --post-js glue.js -o dist/hello.js

