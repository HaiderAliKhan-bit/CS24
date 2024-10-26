#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // declaration.
    char string_1[50], string_2[50], string_3[50];

    // initialization.
    cout << "ENTER FIRST STRING: ";
    cin.getline(string_1, 50);
    cout << "ENTER SECOND STRING: ";
    cin.getline(string_2, 50);
    cout << "ENTER THIRD STRING: ";
    cin.getline(string_3, 50);

    int a, b, c;

    a = strlen(string_1);
    b = strlen(string_2);
    c = strlen(string_3);

    if (a < b)
    {
        if (a < c)
        {
            cout << string_1;
        }
        else
        {
            cout << string_3;
        }
    }
    else
    {
        if (b < c)
        {
            cout << string_2;
        }
        else
        {
            cout << string_3;
        }
    }

    return 0;
}