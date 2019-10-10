#include "wasm-module1.h"

#include <emscripten/val.h>

#include "reactive.h"

using namespace emscripten;

//global counter
int counter = 0;

std::string findNickById(int i) {
    val user = val::global("user");
    return user.call<std::string>("funNickById", val(i));
}

double add(double a, double b) {
    return a + b;
}

int getCounter() {
    return counter;
}

std::string exclaim(std::string message) {
    // int i = user_findUserInfo(1);
    counter = counter + 1;
    send(1, 2, "metadata", "data");
    return message + "! ";
}
