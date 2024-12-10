//CPU.h
#ifndef CPU_H


#define CPU_H

#include <vector>
#include <stdexcept>// chat-GPT//for exception handling invalid memory addresses or division by zero
#include "memory.h"

namespace SimulatedCPU {

class CPU {
private:
    Memory memory;
    int accumulator;//stores temp results
    int compareFlag;//comparison results from conditional operators

public:
    CPU(int memorySize = 10);//initial memory capacity

    void load(int address);
    void store(int address);
    void add(int address);
    void subtract(int address);
    void multiply(int address);
    void divide(int address);
    void logicalAnd(int address);
    void logicalOr(int address);
    void logicalNot();
    void compare(int address);
    void printMemory() const;
};

} // namespace SimulatedCPU

#endif // CPU_H
