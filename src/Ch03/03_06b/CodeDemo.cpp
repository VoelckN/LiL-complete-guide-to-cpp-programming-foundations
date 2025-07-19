// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// HAHA fun fact: #define is discouraged because of lack of type enforcement
// instead: use const qualifier
#define MAX_AMMO 500
//#define DEBUG //Doesn't need a value if it's only used for an #ifdef directive

int main(){
    // I can't tell if using MAX_AMMO here is just to show
    int32_t ammo = MAX_AMMO / 5;
    uint8_t health_items = 5;

// useful for debugging
#ifdef DEBUG
    std::cout << "[DEBUG] Starting game simulation ..." << std::endl;
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    // int must be cast to health_items (otherwise it would be read as a text char)
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
