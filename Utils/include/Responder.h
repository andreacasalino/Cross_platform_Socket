/**
 * Author:    Andrea Casalino
 * Created:   01.28.2020
 *
 * report any bug to andrecasa91@gmail.com.
 **/

#ifndef SAMPLE_RESPONDER_H
#define SAMPLE_RESPONDER_H

#include <core/Messanger.h>
#include <Names.h>
#include <Logger.h>
#include <array>

namespace sck::sample {
    class Responder
        : public Logger {
    public:
        Responder(std::unique_ptr<sck::Messanger> socket);

        void respond();

        void respond(const std::size_t times);

        void respondForever();

    private:
        std::unique_ptr<sck::Messanger> socket;
        std::array<char, 1000> recvBuffer;
    };
}

#endif