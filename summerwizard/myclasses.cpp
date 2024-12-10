#include "dataType.h"
#include "memory.h" // Include memory header to use Memory class

// Example derived classes using DataType

class Zaitoun : public DataType<int> {
public:
    Zaitoun(int v = 0) : DataType<int>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(v);
    }
};

class Abcs : public DataType<char> {
public:
    Abcs(char v = '\0') : DataType<char>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
};

class Halfnums : public DataType<float> {
public:
    Halfnums(float v = 0.0f) : DataType<float>(v, Memory::getGlobalMemory()) {
        getMemory().addToMemory(static_cast<int>(v));
    }
};

#include <string>

class Word : public DataType<std::string> {
public:
    Word(const std::string& v = "") : DataType<std::string>(v, Memory::getGlobalMemory()) {}
};

class Yesorno : public DataType<bool> {
public:
    Yesorno(bool v = false) : DataType<bool>(v, Memory::getGlobalMemory()) {}
};
