#include <iostream>
#include <string.h>
#include <limits> // For std::numeric_limits
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE LENGTH OF STRING: ";
    cin >> n;

    // Clear the input buffer before taking string input, YOU CAN USE THIS STATEMENT IF YOU WAN TO.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char string_1[n + 1]; // +1 for the null terminator
    char string_2[n + 1]; // +1 for the null terminator

    cout << "ENTER THE STRING: ";
    cin.getline(string_1, n + 1); // Use getline to safely read the string

    // Check if the input string length exceeds the specified length
    if (strlen(string_1) > n) {
        cout << "Error: String exceeds the specified length of " << n << "." << endl;
        return 1; // Exit the program with an error code
    }

    strcpy(string_2, string_1); // Copy string safely

    cout << "FIRST STRING: ";
    puts(string_1);
    cout << "SECOND STRING: ";
    puts(string_2);

    return 0;
}