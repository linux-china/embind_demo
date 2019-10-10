Embind Demo
===================

WebAssembly bind demo with embind & Web IDL

# WebIDL Binder

https://emscripten.org/docs/porting/connecting_cpp_and_javascript/WebIDL-Binder.html

* Create WebIDL, for example hello.idl
* Generate cpp file from idl
* Create C++ header file with Class definition
* Implement C++ class
* Compile cpp to wasm and js 

# Wasm call JS functions

* Implement a C API in JavaScript: https://emscripten.org/docs/porting/connecting_cpp_and_javascript/Interacting-with-code.html
* Using val to transliterate JavaScript to C++: https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html#using-val-to-transliterate-javascript-to-c

### Clion Integration

CLion with emscripten: Settings > Build, Execution, Deployment > CMake,  add following in CMake options: 

```
-DCMAKE_TOOLCHAIN_FILE=/usr/local/Cellar/emscripten/1.38.44/libexec/cmake/Modules/Platform/Emscripten.cmake
```

# References

* Google Developer WebAssembly: https://developers.google.cn/web/updates/tags/webassembly
* Embind: https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html
* Emscripten’s embind: https://developers.google.cn/web/updates/2018/08/embind
* Emscripten and npm: https://developers.google.cn/web/updates/2019/01/emscripten-npm
* Replacing a hot path in your app's JavaScript with WebAssembly: https://developers.google.cn/web/updates/2019/02/hotpath-with-wasm
* Emscripten Compiler Frontend: https://emscripten.org/docs/tools_reference/emcc.html
* Web IDL: https://heycam.github.io/webidl/