//
// Reactive stream
//

#ifndef EMBIND_DEMO_REACTIVE_H
#define EMBIND_DEMO_REACTIVE_H

#include <string>

//accept connect from upstream
void accept(std::string id, std::string token, std::string metadataType, std::string dataType);

//receive message from upstream
void receiveOne(int id, int type, std::string metadata, std::string data);

//receive messages from upstream
void receive(int id, int type, std::string metadata, std::string data);

// send message to upstream only once
void sendOne(int id, int type, std::string metadata, std::string data);

//send messages to upstream
void send(int id, int type, std::string metadata, std::string data);

#endif //EMBIND_DEMO_REACTIVE_H
