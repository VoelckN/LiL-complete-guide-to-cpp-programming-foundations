// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>


// enum is global, C-based, and not strong; enum class is scoped, C++, and stronger
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    // The problem lies in creating a local int variable named sound in this function
    // asset_value won't take the enum "sound" entry, but the local variable
    // This causes confusion and delay

    // Upon using enum classes, the types of stuff in such are unique and not int
    // Thus, we change it from "int asset_value" to "asset_type asset_value"
    // I think menu_section is just to show how enum classes can be specific
    asset_type asset_value;

    asset_value = asset_type::sound;

    // The (int) means casting the value to an integer, sounds magical
    // I CAST INTEGER ON asset_value!! *throws fireball*
    // But it probably refers to casting/molding things
    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
