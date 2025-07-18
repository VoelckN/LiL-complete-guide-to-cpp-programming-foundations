// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

/*
Our task: ask the address of the user, then print the user's name.
*/

#include <iostream>
#include <string>

int main(){
    std::cout << "Hi There!" << std::endl;
    std::string Username;
    // std::flush is so that the input appears at the end of the line?
    std::cout << "What is your name? " << std::flush;
    std::cin >> Username;
    std::cout << "Hello " << Username << "!" << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}