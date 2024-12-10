//mylanguage.h

#ifndef MYLANGUAGE_H
#define MYLANGUAGE_H

#include "datatypes.h"
#include "memory.h"
#include <string>

namespace SimulatedCPU {

class Mana : public DataType<int> {
public:
    Mana(int v = 0) : DataType<int>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(v);
    }
};

class Rune : public DataType<char> {
public:
    Rune(char v = '\0') : DataType<char>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
};

class Potion : public DataType<float> {
public:
    Potion(float v = 0.0f) : DataType<float>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
};

class Incantation : public DataType<std::string> {
public:
    Incantation(const std::string& v = "") : DataType<std::string>(v, Memory::getGlobalMemory()) {}
};

class Charm : public DataType<bool> {
public:
    Charm(bool v = false) : DataType<bool>(v, Memory::getGlobalMemory()) {}
};

} // namespace SimulatedCPU

#endif // MYLANGUAGE_H
