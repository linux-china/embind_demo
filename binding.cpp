//
// embind cpp
//
#include <emscripten/bind.h>

#include "reactive.h"
#include "wasm-module1.h"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {
    function("getCounter", &getCounter);
    function("add", &add);
    function("exclaim", &exclaim);
    function("connect", &accept);
    function("send", &receive);
    function("sendOne", &receiveOne);
}
