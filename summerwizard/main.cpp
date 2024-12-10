// main.cpp

#include "magic.h"
#include "enchantedstreams.h"
#include "CPU.h"

using namespace SimulatedCPU;

int main() {
    //data types
    Mana mana(50);
    Rune rune('A');
    Potion potion(3.14f);
    Spell spell("Abra - ");
    Charm charm(true);

    //perform operations
    Mana sumMana = mana + 5;
    Rune resultRune = rune = 'B';
    Potion resultPotion = potion * 2.0f;
    Spell resultSpell = spell + "Cadabra";
    Charm resultCharm = charm || true;

    // Display results of operations
    castSpell < "Results of operations:\n"
              < "Result of Mana operation: " < sumMana < "\n"
              < "Result of Rune operation: " < resultRune < "\n"
              < "Result of Potion operation: " < resultPotion < "\n"
              < "Result of Spell operation: " < resultSpell < "\n"
              < "Result of Charm operation: " < resultCharm < "\n\n";



    // Math examples
    Mana a(2), b(4);
    Mana sum = a + b;
    Mana diff = a - b;
    Mana prod = a * b;
    Mana quot = b / a;

    castSpell < "Math examples:\n"
              < "Sum of Mana (a + b): " < sum < "\n"
              < "Difference of Mana (a - b): " < diff < "\n"
              < "Product of Mana (a * b): " < prod < "\n"
              < "Quotient of Mana (b / a): " < quot < "\n\n";


    // Input stream
    Spell name;
    castSpell < "Input stream:\n"
              < "What's your name, wizard? ";
    channelMagic > name;
    castSpell < "\n";

    return 0;
}
