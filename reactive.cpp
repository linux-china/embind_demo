//
// Created by linux_china on 10/9/19.
//

#include "reactive.h"
#include <emscripten/val.h>

using namespace emscripten;

//receive message from hosting runtime
void service(int id, int type, std::string metadata, std::string data) {

}

//send messages to hosting runtime
void send(int id, int type, std::string metadata, std::string data) {
    val user = val::global("wasmChannel");
    user.call<void>("service", val(id), val(type), val(metadata), val(data));
}
