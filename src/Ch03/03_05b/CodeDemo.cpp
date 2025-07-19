// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment (variable to be updated on the left)
    // Pick up new ammo
    ammo += 10;
    std::cout << "New ammo: " << ammo << std::endl;
    // Subtraction assignment
    // After weapon use
    ammo -= 2;
    std::cout << "ammo after use: " << ammo << std::endl;
    // Multiplication assignment
    // There's more of them than we thought ...
    incoming_zombies *= 2;
    std::cout << "Z count after timeout: " << incoming_zombies << std::endl;
    // Division assignment
    // Sharing ammo
    ammo /= 2;
    std::cout << "Ammo after sharing with friend: " << ammo << std::endl;
    // Remainder assignment
    // Backpack lost
    ammo %= 5;
    std::cout << "Backpack lost - ammo left: " << ammo << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
