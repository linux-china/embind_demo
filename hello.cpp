//
// Created by linux_china on 10/9/19.
//
#include "hello.h"
#include <iostream>
#include <string>


char *Hello::hello(char *) {
    char *ch = new char[11] /* 11 = len of Hello Heap + 1 char for \0*/;
    strcpy(ch, "Hello Heap");
    return ch;
}

int Hello::sum(int a, int b) {
    //std::string str_name(name);
    //std::string str = "Hello ";
    //return const_cast<char *>(str.c_str());
    //char* ch = new char[11] /* 11 = len of Hello Heap + 1 char for \0*/;
    //strcpy(ch, "Hello Heap");
    //return ch;
    return a + b;

}