// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>

int main(){
    // std = standard library
    // :: = "scope resolution operator"
    // cout = character output, object in iostream library, sends characters to terminal
    // << = left-bound insertion operators, sends stuff on right to the object at its left
    // std::endl = including a new line afterwards, symbol found in the standard library (endl = "end line")
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0; // traditionally used to mean no errors came into the program
}