// enchantedstreams.h

#ifndef ENCHANTEDSTREAMS_H
#define ENCHANTEDSTREAMS_H

#include <iostream>

namespace SimulatedCPU {
//output
class EnchantedOutStream {
public:

    template<typename T>
    EnchantedOutStream& operator<(const T& value) { //overloading <
        std::cout << value;
        return *this;
    }

};
// input
class EnchantedInStream {
public:

    template<typename T>
    EnchantedInStream& operator>(T& value) { //overloading >
        std::cin >> value;
        return *this;
    }
};

//declaring global objects//chat -gpt
extern EnchantedOutStream castSpell;
extern EnchantedInStream channelMagic;

}

#endif
