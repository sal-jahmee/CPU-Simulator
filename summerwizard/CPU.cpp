//CPU.cpp

#include "CPU.h"
#include <iostream>

namespace SimulatedCPU {

CPU::CPU(int memorySize) : memory(memorySize), accumulator(0), compareFlag(0) {}//constructor

void CPU::load(int address) {//the address parameter represents the memory location (or index) from which the CPU should load data.
    if (address >= 0 && address < memory.size()) {
        accumulator = memory.load(address);//load the data from the specified memory address into the CPU's accumulator
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::store(int address) {
    if (address >= 0 && address < memory.size()) {
        memory.store(address, accumulator);//calling store method of Memory class (memory object) to store the current value of accum at the specified address.
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::add(int address) {
    //add the value loaded from memory at the specified address to the current accumulator value.
    if (address >= 0 && address < memory.size()) {
        accumulator += memory.load(address);
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::subtract(int address) {
    //subtract the value loaded from memory at the specified address from the current accumulator value
    if (address >= 0 && address < memory.size()) {
        accumulator -= memory.load(address);
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::multiply(int address) {
    // multiply the current accumulator value by the value loaded from memory at the specified address
    if (address >= 0 && address < memory.size()) {
        accumulator *= memory.load(address);//
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::divide(int address) {
    // Divides the accumulator by the value at memory address, handles division by zero
    if (address >= 0 && address < memory.size()) {
        int loadedValue = memory.load(address);
        if (loadedValue == 0) {
            std::cout << "Error: Division by zero" << std::endl;
        } else {
            accumulator /= loadedValue;
        }
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::compare(int address) {
    // Compares accumulator with the value at memory address and sets compareFlag accordingly
    if (address >= 0 && address < memory.size()) {
        int loadedValue = memory.load(address);
        if (accumulator < loadedValue) {
            compareFlag = -1;
        } else if (accumulator > loadedValue) {
            compareFlag = 1;
        } else {
            compareFlag = 0;
        }
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::logicalAnd(int address) {
    // Performs bitwise AND between accumulator and value at memory address
    if (address >= 0 && address < memory.size()) {
        accumulator &= memory.load(address);
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::logicalOr(int address) {
    // Performs bitwise OR between accumulator and value at memory address
    if (address >= 0 && address < memory.size()) {
        accumulator |= memory.load(address);
    } else {
        std::cout << "Error: Invalid memory address " << address << std::endl;
    }
}

void CPU::logicalNot() {
    // Performs bitwise NOT on accumulator
    accumulator = ~accumulator;
}

void CPU::printMemory() const {
   memory.print(); // Prints the contents of memory
}

}
