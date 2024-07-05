//
// Created by Yona Appletree on 7/2/24.
//

#ifndef RUNTIME_MESSAGEAPI_H
#define RUNTIME_MESSAGEAPI_H

#include <stdint.h>

struct MessageHeader {
    uint32_t messageType;
    uint32_t length;
    uint32_t checksum;
};

/**
 * Handles decoding and encoding of messages to and from a potentially unreliable transport.
 */
class MessageApi {

};


#endif //RUNTIME_MESSAGEAPI_H
