#include <iostream>
using namespace std;

int n;
int table(int a);

int main()
{
    cout << "ENTER A NUMBER TO PRINT ITS MULTIPLICATIVE TABLE: ";
    cin >> n;
    table(n);

    return n;
}

int table(int a)
{
    for (int b = 1; b <= 10; b++)
    {
        cout << n << " x " << b << "\t=\t" << n * b << endl;
    }
    return 0;
}
