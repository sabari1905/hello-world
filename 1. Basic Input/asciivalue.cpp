#include <iostream>
using namespace std;

int main() {
    char character; // Declare a variable to store the character

    // Input a character
    cout << "Enter a character: ";
    cin >> character;

    // Display the ASCII value
    cout << "The ASCII value of '" << character << "' is " << int(character) << "." << endl;

    return 0;
}
             