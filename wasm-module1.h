#ifndef EMBIND_DEMO_WASM_MODULE1_H
#define EMBIND_DEMO_WASM_MODULE1_H

#include <emscripten/bind.h>

using namespace emscripten;

double add(double a, double b);

std::string exclaim(std::string message);

EMSCRIPTEN_BINDINGS(my_module) {
    function("add", &add);
    function("exclaim", &exclaim);
}

extern "C" {
   extern int user_findUserInfo(int i);
}


#endif //EMBIND_DEMO_WASM_MODULE1_H
