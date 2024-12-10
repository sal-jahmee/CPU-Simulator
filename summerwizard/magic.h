// magic.h

#ifndef MAGIC_H
#define MAGIC_H

#include "datatypes.h"
#include "memory.h"
#include <string>

namespace SimulatedCPU {

class Mana : public DataType<int> {//use template class a parent to inherit all the functions that i declared in datatypes.h
public:
    Mana(int v = 0) : DataType<int>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(v);
    }
    Mana(const DataType<int>& other) : DataType<int>(other.getValue(), Memory::getGlobalMemory()) {}// Sets up Mana objects with the value 'v' and access to global memory.
};

class Rune : public DataType<char> {
public:
    Rune(char v = '\0') : DataType<char>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
    Rune(const DataType<char>& other) : DataType<char>(other.getValue(), Memory::getGlobalMemory()) {}// Sets up rune objects with the value 'v' and access to global memory.
};

class Potion : public DataType<float> {
public:
    Potion(float v = 0.0f) : DataType<float>(v, Memory::getGlobalMemory()) {// Sets up potion objects with the value 'v' and access to global memory.
        getMemory().addToMemory(static_cast<int>(v));
    }
    Potion(const DataType<float>& other) : DataType<float>(other.getValue(), Memory::getGlobalMemory()) {}
};

class Spell : public DataType<std::string> {
public:
    Spell(const std::string& v = "") : DataType<std::string>(v, Memory::getGlobalMemory()) {}// Sets up spell objects with the value 'v' and access to global memory.
    Spell(const DataType<std::string>& other) : DataType<std::string>(other.getValue(), Memory::getGlobalMemory()) {}
};

class Charm : public DataType<bool> {
public:
    Charm(bool v = false) : DataType<bool>(v, Memory::getGlobalMemory()) {}// Sets up charm objects with the value 'v' and access to global memory.
    Charm(const DataType<bool>& other) : DataType<bool>(other.getValue(), Memory::getGlobalMemory()) {}

    Charm operator||(bool other) const {
        return Charm(this->getValue() || other);
    }
};

}

#endif // MAGICALDATATYPES_H
