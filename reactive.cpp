//
// Created by linux_china on 10/9/19.
//

#include "reactive.h"
#include <emscripten/val.h>

using namespace emscripten;


void receive(int id, int type, std::string metadata, std::string data) {

}

void sendOne(int id, int type, std::string metadata, std::string data) {
    val user = val::global("reactive");
    user.call<void>("sendOne", val(id), val(type), val(metadata), val(data));
}

void send(int id, int type, std::string metadata, std::string data) {
    val user = val::global("reactive");
    user.call<void>("send", val(id), val(type), val(metadata), val(data));
}
