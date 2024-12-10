#include "datatypes.h"
#include "memory.h" // Include memory header to use Memory class
#include <string> // Include the string header to use std::string

// Example derived classes using DataType

class Mana : public DataType<int> { // Mana is an integer
public:
    Mana(int v = 0) : DataType<int>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(v);
    }
};

class Rune : public DataType<char> { // Rune is a character
public:
    Rune(char v = '\0') : DataType<char>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
};

class Potion : public DataType<float> { // Potion is a float
public:
    Potion(float v = 0.0f) : DataType<float>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
};

class Incantation : public DataType<std::string> { // Incantation is a string
public:
    Incantation(const std::string& v = "") : DataType<std::string>(v, Memory::getGlobalMemory()) {}
};

class Charm : public DataType<bool> { // Charm is a bool
public:
    Charm(bool v = false) : DataType<bool>(v, Memory::getGlobalMemory()) {}
};
