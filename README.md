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
* Memory views and Access memory from JavaScript: 

```c
unsigned char *byteBuffer;

val getBytes(offset, lenth) {
    return val(typed_memory_view(lenth, byteBuffer+offset));
}

```

* Passing and returning WebAssembly array parameters: https://becominghuman.ai/passing-and-returning-webassembly-array-parameters-a0f572c65d97
* Access memory from JavaScript: https://emscripten.org/docs/porting/connecting_cpp_and_javascript/Interacting-with-code.html

# Reactive communication between Wasm and Hosting

### receive connection & messages from peer

* void accept(String id, String token,String metadataType, String dataType)
* void receiveOne(int id, int type, String metadata, String data)
* void receive(int id, int type, String metadata, String data)

### send messages to peer 
* void send(int id, int type, String metadata, String data)
* void send(int id, int type, String metadata, String data)

Asyncify: https://emscripten.org/docs/porting/asyncify.html

TinyFSM: a simple finite state machine library for C++, designed for optimal performance and low memory footprint. https://digint.ch/tinyfsm/index.html

# Clion Integration

CLion with emscripten: Settings > Build, Execution, Deployment > CMake,  add following in CMake options: 

```
-DCMAKE_TOOLCHAIN_FILE=/usr/local/opt/emscripten/libexec/cmake/Modules/Platform/Emscripten.cmake
```

# References

* Google Developer WebAssembly: https://developers.google.cn/web/updates/tags/webassembly
* Embind: https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html
* Emscripten’s embind: https://developers.google.cn/web/updates/2018/08/embind
* Emscripten and npm: https://developers.google.cn/web/updates/2019/01/emscripten-npm
* Replacing a hot path in your app's JavaScript with WebAssembly: https://developers.google.cn/web/updates/2019/02/hotpath-with-wasm
* Emscripten Compiler Frontend: https://emscripten.org/docs/tools_reference/emcc.html
* Web IDL: https://heycam.github.io/webidl/