#include <iostream>
using namespace std;

int addition(int a, int b);
int sum, x, y;

int main()
{
    addition(x, y);
    cout << "THE SUM OF GIVEN VALUES IS: " << sum << endl;
    return 0;
}

int addition(int a, int b)
{

    cout << "ENTER THE FIRST NUMBER: ";
    cin >> a;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> b;
    sum = a + b;

    return sum;
}
