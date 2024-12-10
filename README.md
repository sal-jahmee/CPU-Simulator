# 🧸 **OVERVIEW**


This project simulates a simple CPU using object-oriented programming principles. The goal was to implement a CPU class that supports basic instructions such as **load**, **store**, **add**, **subtract**, **multiply**, **divide**, **compare**, and **logical operations**.  
This simulation allows users to interact with the CPU using a simple programming language written in C++.

The program is designed to emulate how a CPU might process basic operations using a **register/accumulator system**, and it is structured using multiple classes that represent the **CPU**, **memory**, and **registers**.



# 🛠️ **PROJECT STRUCTURE**


The project is divided into several components, each responsible for a specific part of the simulation:

- **CPU Class**: Contains methods for performing various operations (Load, Store, Add, Subtract, Multiply, Divide, Compare, Logical Operations).
- **Memory Class**: Simulates the computer's memory (a vector or map to store data).
- **Register Class**: Simulates registers and accumulators, where temporary data is stored.
- **Instruction Set**: Contains predefined instructions that the CPU can execute (such as load, store, arithmetic, etc.).
- **Main Program**: Provides a simple interface for running commands and simulating programs.



# 📁 **FILES**


- **`CPU.h/CPU.cpp`**: Defines the CPU class and its operations.
- **`Memory.h/Memory.cpp`**: Simulates memory management.
- **`Register.h/Register.cpp`**: Simulates registers for arithmetic operations.
- **`Main.cpp`**: Entry point to demonstrate the CPU simulation.
- **`README.md`**: Project overview and instructions.
- **`instructions.txt`**: Syntax for the custom programming language.
- **`readme.txt`**: Details on challenges faced and key learnings.
