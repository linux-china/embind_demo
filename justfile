build:
   mkdir -p dist
   emcc --bind -O3 wasm-module1.cpp -o dist/a.out.js

server: build
   open http://127.0.0.1:8000/index.html
   python3 -m http.server

node_build:
   mkdir -p dist
   emcc --bind -O2 -s WASM=1 -Wall -s MODULARIZE=1 -o dist/a_node.js wasm-module1.cpp

node_run: node_build
   node index.js

clean:
   rm -rf dist
