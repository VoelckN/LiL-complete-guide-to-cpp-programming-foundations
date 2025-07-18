// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    //Division of two int returns int, so make either 5 or 9 floats/doubles
    //Two ways done: C++ static_cast, and float syntax
    celsius = (fahrenheit - 32) * (static_cast<float>(5) / 9.0f);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 100) << std::endl; // Output: 98 -- This is because of binary encoding limitations?

    std::cout << std::endl << std::endl;
    return 0;
}
