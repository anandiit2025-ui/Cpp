/*
1. Using the Subscript Operator ([])

The subscript operator provides direct access to the character at a given index. 
This method does not perform bounds checking, meaning if you provide an invalid index 
(out of the string's range), it will result in undefined behavior.
  
*/
#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello";
    int index = 1; // Index of the character to check (0-based)

    if (index >= 0 && index < myString.length()) { // Optional: Bounds checking
        char character = myString[index];
        std::cout << "Character at index " << index << ": " << character << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }

    return 0;
}
/*2. Using the at() Member Function

The at() member function also provides access to the character at a given index,
 but it includes bounds checking. If you provide an invalid index, it will throw an 
 std::out_of_range exception. This makes it safer for situations where you are unsure about 
 the validity of the index.

 */
#include <iostream>
#include <string>
#include <stdexcept> // For std::out_of_range

int main() {
    std::string myString = "World";
    int index = 3; // Index of the character to check (0-based)

    try {
        char character = myString.at(index);
        std::cout << "Character at index " << index << ": " << character << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
/*Choosing between [] and at():
*Use [] when you are certain the index will always be valid, as it offers slightly better performance due to the lack of bounds checking.
*Use at() when there's a possibility of an invalid index, as it provides runtime error checking and helps prevent crashes by throwing an exception.
*/