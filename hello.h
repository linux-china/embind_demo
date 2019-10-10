//
// Created by linux_china on 10/9/19.
//

#ifndef EMBIND_DEMO_HELLO_H
#define EMBIND_DEMO_HELLO_H

class Hello {

public:
    Hello() = default;

    int sum(int a, int b);

    char * hello(char * name);
};

#endif //EMBIND_DEMO_HELLO_H
