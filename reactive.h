//
// Reactive stream
//

#ifndef EMBIND_DEMO_REACTIVE_H
#define EMBIND_DEMO_REACTIVE_H

#include <string>

//connect wasm with hosting
void connect(std::string id, std::string token,std::string metadataType, std::string dataType);

void sendOne(int id, int type, std::string metadata, std::string data);

void send(int id, int type, std::string metadata, std::string data);

#endif //EMBIND_DEMO_REACTIVE_H
