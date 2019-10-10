#include "wasm-module1.h"

double add(double a, double b) {
    return a + b;
}

std::string exclaim(std::string message) {
    stub_fun1();
    return message + "!";
}
