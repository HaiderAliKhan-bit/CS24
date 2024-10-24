#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "THE ENTERED NUMBER IS EVEN NUMBER..." << endl;
    }
    else
    {
        cout << "THE ENTERED NUMBER IS ODD NUMBER..." << endl;
    }

    return 0;
}