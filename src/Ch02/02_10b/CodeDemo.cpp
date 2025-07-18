// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; //Помните: флоут имеет "f" после номера, а это двойной
    sprite_x = target_x; // sprite_x = -123; truncated
    player_x = sprite_x; // player_x = (2^32) - 123 = 4294967173

    // Printing lines
    std::cout << "Target (float) = " << target_x << std::endl;
    std::cout << "Sprite (integer) = " << sprite_x << std::endl;
    //std::cout << "Player (unsigned integer) = " << player_x << std::endl;
    std::cout << "Player = " << static_cast<int32_t>(player_x) << std::endl; // O: -123
    /*
    The static_cast took the uint_32t value of player_x
    and turned it back into an int32_t value (as expressed in <>)
    */

    std::cout << std::endl << std::endl;
    return 0;
}
