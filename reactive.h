//
// Reactive stream
//

#ifndef EMBIND_DEMO_REACTIVE_H
#define EMBIND_DEMO_REACTIVE_H

#include <string>

void receive(int id, int type, std::string metadata, std::string data);

void sendOne(int id, int type, std::string metadata, std::string data);

void send(int id, int type, std::string metadata, std::string data);

#endif //EMBIND_DEMO_REACTIVE_H
