#include "wasm-module1.h"
#include <emscripten/val.h>

std::string findNickById(int i) {
    val user = val::global("user");
    return user.call<std::string>("funNickById", val(i));
}

double add(double a, double b) {
    return a + b;
}

std::string exclaim(std::string message) {
    val user = val::global("user");
    // int i = user_findUserInfo(1);
    return message + "! " + findNickById(1);
}
