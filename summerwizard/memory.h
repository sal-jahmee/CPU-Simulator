//memory.h

#ifndef MEMORY_H
#define MEMORY_H

#include <vector>

namespace SimulatedCPU {

class Memory {
private:
    std::vector<int> data;

public:
    static Memory& getGlobalMemory();//chat-GPT//to access a global instance of memory
    Memory();
    Memory(int size);

    int load(int address) const;
    void store(int address, int value);
    void print() const;

    int operator[](int index) const {
        return load(index);
    }

    int& operator[](int index) {
        return data[index];
    }

    int size() const {
        return data.size();
    }

    void addToMemory(int value) {
        data.push_back(value);
    }
};

}

#endif // MEMORY_H
