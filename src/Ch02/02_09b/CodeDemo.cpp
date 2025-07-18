// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;
};

int main(){
    game_character buddy;
    buddy.name = "Buddy";
    buddy.level = 20;
    buddy.role = character_role::protagonist;

    std::cout << buddy.name << " is a level " << buddy.level << " character with the role of " << (int) buddy.role << std::endl; // Output: "Buddy is a level 20 character with the role of 0"

    std::cout << std::endl << std::endl;
    return 0;
}
