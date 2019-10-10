#ifndef EMBIND_DEMO_WASM_MODULE1_H
#define EMBIND_DEMO_WASM_MODULE1_H

#include "reactive.h"

#include <emscripten/bind.h>

using namespace emscripten;

//global counter
int counter = 0;

double add(double a, double b);

int getCounter();

std::string exclaim(std::string message);

EMSCRIPTEN_BINDINGS(my_module) {
    function("getCounter", &getCounter);
    function("add", &add);
    function("exclaim", &exclaim);
    function("receive", &receive);
}

//external api
std::string findNickById(int i);

extern "C" {
extern int user_findUserInfo(int i);
}


#endif //EMBIND_DEMO_WASM_MODULE1_H
