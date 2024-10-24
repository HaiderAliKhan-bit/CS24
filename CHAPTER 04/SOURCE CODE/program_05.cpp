#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "ENTER A NUMBER TO PRINT ITS MULTIPLICATIVE TABLE UPTO 20: ";
    cin >> n;

    for (int i = 0; i <= 20; i++)
    {
        cout << n << " x " << i << "\t= " << " " << (i * n) << endl;
    }

    return 0;
}