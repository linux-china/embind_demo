#include "wasm-module1.h"

double add(double a, double b) {
    return a + b;
}

std::string exclaim(std::string message) {
    int i = user_findUserInfo(1);
    return message + "! " + std::to_string(i);
}
