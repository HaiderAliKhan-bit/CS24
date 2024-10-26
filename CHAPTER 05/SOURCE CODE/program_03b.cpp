// note: a copy of program 3 to make things more convinient for the user...

#include <iostream>
using namespace std;

int main()
{
    int n, x, counter = 0;
    cout << "ENTER THE NUMBER OF VALUES YOU WANT TO STORE IN THE ARRAY: ";
    cin >> n;
    cout << "ENTER THE NUMBER FOR WHICH YOU WANT TO CHECK REPETITION: ";
    cin >> x;

    int arr[n];

    for (int a = 0; a <= n; a++)
    {
        cout << "ENTER A NUMBER: ";
        cin >> arr[a];
    }
    for (int b = 0; b <= n; b++)
    {
        if (arr[b] == x)
        {
            counter++;
        }
        else
        {
            continue;
        }
    }

    cout << "THE NUMBER OF TIMES " << x << " APPEARED IN THE GIVEN ARRAY IS: " << counter << endl;
    return 0;
}