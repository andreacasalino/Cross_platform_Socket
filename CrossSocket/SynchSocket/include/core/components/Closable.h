/**
 * Author:    Andrea Casalino
 * Created:   01.28.2020
 *
 * report any bug to andrecasa91@gmail.com.
 **/

#ifndef _CROSS_SOCKET_CLOSABLE_H_
#define _CROSS_SOCKET_CLOSABLE_H_

namespace sck {
    class Closable {
    public:
        /**
         * @brief close the object
         */
        virtual void close() = 0;
    };
}

#endif