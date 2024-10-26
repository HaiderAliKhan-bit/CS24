#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for (int a = 0; a < 10; a++)
    {
        cout << "ENTER A NUMBER: ";
        cin >> arr[a];
    }

    cout << "ORIGINAL ORDER: " << endl;
    for (int b = 0; b < 10; b++)
    {
        cout << arr[b] << " ";
    }

    cout << "\nREVERSED ORDER: " << endl;
    for (int c = 9; c >= 0; c--)
    {
        cout << arr[c] << " ";
    }
    return 0;
}