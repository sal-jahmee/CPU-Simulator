Project: Simulated Magical Programming Language

Description:
This project simulates a fictional programming language set in a magical world, combining elements of fantasy with basic computational functionalities. The language includes custom data types such as Mana, Rune, Potion, Spell, and Charm, each representing magical concepts with specific operations. Additionally, a simulated CPU class is implemented to manage memory, perform arithmetic and logical operations, and handle input/output using magical-themed streams.

Incorporated Elements:

1. Magical Data Types:
   - Mana: Represents magical energy with integer operations.
   - Rune: Symbolizes mystical symbols with character-based operations.
   - Potion: Represents magical elixirs with floating-point operations.
   - Spell: Represents incantations as strings with concatenation operations.
   - Charm: Represents enchanted objects with boolean operations.

2. CPU Simulation:
   - Memory Management: Implemented using a Memory class to handle data storage.
   - Arithmetic Operations: Addition, subtraction, multiplication, division.
   - Logical Operations: Bitwise AND, OR, NOT operations.
   - Comparison: Compare operation to set flags based on accumulator value.

3. Input/Output Handling:
   - Custom Streams: Utilizes EnchantedOutStream for output and EnchantedInStream for input to enhance the magical theme of interaction with users.

Implementation Details:

- Data Type Hierarchy: Inheritance from a generic DataType class to facilitate common operations across different magical data types.
- CPU Class: Manages memory operations, arithmetic, logical operations, and comparison based on simulated CPU architecture.
- Input/Output Streams: Custom stream classes designed to provide a magical-themed interaction experience, aligning with the project's fantasy setting.

Learning Experience:

New Learnings:
- Template Programming: Utilized templates in C++ to create flexible data type operations.
- Custom Input/Output: Implemented custom streams to customize user interaction in a thematic manner.
- CPU Simulation: Gained insights into simulating basic CPU functionalities, memory management, and arithmetic/logical operations within a programming context.

Challenges:
- Understanding the project's purpose and determining where to implement functionalities was initially challenging, particularly due to my limited familiarity with CPU architecture and memory interaction.

