//
// Created by linux_china on 10/9/19.
//
#include "hello.h"
#include <iostream>
#include <string>


char *Hello::hello(char *name) {
    std::string str_name(name);
    std::string str = "Hello " + str_name;
    return const_cast<char *>(str.c_str());
}

int Hello::sum(int a, int b) {
    return a + b;

}