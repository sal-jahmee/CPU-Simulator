//memory.cpp

#include "memory.h"
#include <iostream>
#include <stdexcept>

namespace SimulatedCPU {

Memory::Memory() : data() {}  //constructor initializes an empty memory

Memory::Memory(int size) : data(size, 0) {}

Memory& Memory::getGlobalMemory() {  //retrieves the global instance of Memory
    static Memory globalMemory;
    return globalMemory;
}

int Memory::load(int address) const {  //loads the value at 'address' from memory
    if (address < 0 || address >= data.size()) {
        throw std::out_of_range("Memory address out of range");
    }
    return data[address];
}

void Memory::store(int address, int value) {  //stores 'value' at address in memory
    if (address < 0 || address >= data.size()) {
        throw std::out_of_range("Memory address out of range");
    }
    data[address] = value;
}

void Memory::print() const {  // prints all elements in memory
    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

}
