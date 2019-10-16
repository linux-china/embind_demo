//
// Created by linux_china on 10/9/19.
//

#include "reactive.h"
#include <emscripten/val.h>

#include <utility>

using namespace emscripten;

void log(std::string text) {
    val user = val::global("console");
    user.call<void>("log", val(text));
}

//receive message from hosting runtime
void service(int id, int type, std::string metadata, std::string data) {
    log(std::move(metadata));
}

//send messages to hosting runtime
void send(int id, int type, std::string metadata, std::string data) {
    val user = val::global("wasmChannel");
    user.call<void>("service", val(id), val(type), val(metadata), val(data));
}



