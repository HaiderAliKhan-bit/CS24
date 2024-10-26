#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // declaration.
    char string_1[20], string_2[20];
    // initialization.
    cout << "ENTER THE FIRST STRING: ";
    cin.getline(string_1, 20);
    cout << "ENTER THE SECOND STRING: ";
    cin.getline(string_2, 20);
    // function
    strcat(string_1, string_2);
    // printing.
    cout << string_1;

    return 0;
}