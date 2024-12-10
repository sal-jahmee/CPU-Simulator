// magicalDataTypes.h

#ifndef MAGIC_H
#define MAGIC_H

#include "datatypes.h"
#include "memory.h"
#include <string>

namespace SimulatedCPU {

class Mana : public DataType<int> {
public:
    Mana(int v = 0) : DataType<int>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(v);
    }
    Mana(const DataType<int>& other) : DataType<int>(other.getValue(), Memory::getGlobalMemory()) {}
};

class Rune : public DataType<char> {
public:
    Rune(char v = '\0') : DataType<char>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
    Rune(const DataType<char>& other) : DataType<char>(other.getValue(), Memory::getGlobalMemory()) {}
};

class Potion : public DataType<float> {
public:
    Potion(float v = 0.0f) : DataType<float>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
    Potion(const DataType<float>& other) : DataType<float>(other.getValue(), Memory::getGlobalMemory()) {}
};

class Spell : public DataType<std::string> {
public:
    Spell(const std::string& v = "") : DataType<std::string>(v, Memory::getGlobalMemory()) {}
    Spell(const DataType<std::string>& other) : DataType<std::string>(other.getValue(), Memory::getGlobalMemory()) {}
};

class Charm : public DataType<bool> {
public:
    Charm(bool v = false) : DataType<bool>(v, Memory::getGlobalMemory()) {}
    Charm(const DataType<bool>& other) : DataType<bool>(other.getValue(), Memory::getGlobalMemory()) {}

    // Logical OR operator
    Charm operator||(bool other) const {
        return Charm(this->getValue() || other);
    }
};

} // namespace SimulatedCPU

#endif // MAGICALDATATYPES_H
