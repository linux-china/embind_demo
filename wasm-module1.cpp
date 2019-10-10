#include "wasm-module1.h"
#include <emscripten/val.h>

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
    return message + "! ";
}
