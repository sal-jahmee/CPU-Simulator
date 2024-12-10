#ifndef DATATYPE_H
#define DATATYPE_H

#include "memory.h"
#include "PrintedOutStream.h" // Ensure to include PrintedOutStream header

extern PrintedOutStream printedout_;

template<typename T>
class DataType {
private:
    T value;
    Memory& memory;

public:
    DataType(T v, Memory& mem) : value(v), memory(mem) {}

    // Common arithmetic operators
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
            std::cerr << "Error: Division by zero." << std::endl;
            return DataType<T>(); // Return default-initialized object
        }
        return DataType<T>(value / other.value, memory);
    }

    DataType<T>& operator=(const DataType<T>& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Override printedout_() to use PrintedOutStream
    void printedout_() const {
        printedout_ << value; // Use the printedout_ instance
    }

    T getValue() const {
        return value;
    }

    Memory& getMemory() const {
        return memory;
    }

    friend std::ostream& operator<<(std::ostream& os, const DataType<T>& data) {
        os << data.getValue();
        return os;
    }
};

#endif // DATATYPE_H
