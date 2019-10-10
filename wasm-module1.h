#ifndef EMBIND_DEMO_WASM_MODULE1_H
#define EMBIND_DEMO_WASM_MODULE1_H

#include <string>

double add(double a, double b);

int getCounter();

std::string exclaim(std::string message);

//external api
std::string findNickById(int i);

extern "C" {
extern int user_findUserInfo(int i);
}


#endif //EMBIND_DEMO_WASM_MODULE1_H
