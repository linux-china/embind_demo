//
// Reactive stream
//

#ifndef EMBIND_DEMO_REACTIVE_H
#define EMBIND_DEMO_REACTIVE_H

#include <string>

//receive messages from hosting runtime
void receive(int id, int type, std::string metadata, std::string data);

//send messages to hosting runtime
void send(int id, int type, std::string metadata, std::string data);

#endif //EMBIND_DEMO_REACTIVE_H
