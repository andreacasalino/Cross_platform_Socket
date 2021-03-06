/**
 * Author:    Andrea Casalino
 * Created:   01.28.2020
 *
 * report any bug to andrecasa91@gmail.com.
 **/

#ifndef _CROSS_SOCKET_TYPEDRECEIVECAPABLE_H_
#define _CROSS_SOCKET_TYPEDRECEIVECAPABLE_H_

#include <chrono>

namespace sck::typed {
    template<typename T>
    class TypedReceiveCapable {
    public:
        virtual bool receive(T& recipient, const std::chrono::milliseconds& timeout) = 0;
    };
}

#endif