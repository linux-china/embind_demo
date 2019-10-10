//
// Created by linux_china on 10/9/19.
//

#include "reactive.h"
#include <emscripten/val.h>

using namespace emscripten;

void connect(std::string id, std::string token, std::string metadataType, std::string dataType) {

}

void sendOne(int id, int type, std::string metadata, std::string data) {
    val user = val::global("reactive");
    user.call<void>("sendOne", val(id), val(type), val(metadata), val(data));
}

void send(int id, int type, std::string metadata, std::string data) {
    val user = val::global("reactive");
    user.call<void>("send", val(id), val(type), val(metadata), val(data));
}


// send message to upstream only once
void upSendOne(int id, int type, std::string metadata, std::string data) {

}

//send messages to upstream
void upSend(int id, int type, std::string metadata, std::string data) {

}
