// datatypes.h

#ifndef DATATYPES_H
#define DATATYPES_H

#include "memory.h"
#include <iostream>

namespace SimulatedCPU {

template<typename T>
class DataType {
private:
    T value;  //stores the value of the data type
    Memory& memory;  // reference to memory

public:
    //value initialization and memory reference
    DataType(T v, Memory& mem) : value(v), memory(mem) {}

    //Operator overloads
    DataType<T> operator+(const DataType<T>& other) const {
        return DataType<T>(value + other.value, memory);
    }

    DataType<T> operator-(const DataType<T>& other) const {
        return DataType<T>(value - other.value, memory);
    }

    DataType<T> operator*(const DataType<T>& other) const {
        return DataType<T>(value * other.value, memory);
    }

    DataType<T> operator/(const DataType<T>& other) const {
        if (other.value == T()) {
            throw std::invalid_argument("Division by zero.");
        }
        return DataType<T>(value / other.value, memory);
    }

    DataType<T>& operator=(const DataType<T>& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Operator overloads for native types (T)(Mana sumMana = mana + 5;)
    DataType<T> operator+(const T& other) const {
        return DataType<T>(value + other, memory);
    }

    DataType<T> operator-(const T& other) const {
        return DataType<T>(value - other, memory);
    }

    DataType<T> operator*(const T& other) const {
        return DataType<T>(value * other, memory);
    }

    DataType<T> operator/(const T& other) const {
        if (other == T()) {
            throw std::invalid_argument("Division by zero.");
        }
        return DataType<T>(value / other, memory);
    }

    DataType<T>& operator=(const T& other) {
        value = other;
        return *this;
    }

    //getter for value
    T getValue() const { return value; }

    //getter for the memory reference
    Memory& getMemory() const { return memory; }

    // overloaded stream insertion<< operator for output
    friend std::ostream& operator<<(std::ostream& os, const DataType<T>& data) {
        os << data.getValue();
        return os;
    }

    // overloaded stream extraction>> operator for input
    friend std::istream& operator>>(std::istream& is, DataType<T>& data) {
        is >> data.value;
        return is;
    }
};

}

#endif
