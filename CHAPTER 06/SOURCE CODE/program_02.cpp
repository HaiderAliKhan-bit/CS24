#include <iostream>
using namespace std;

int x, y, z;
int mean(int a, int b, int c);
int AM;

int main()
{

    mean(x, y, z);
    cout << "THE ARITHEMATIC MEAN OF GIVEN VALUES IS: " << AM << endl;
    return 0;
}

int mean(int a, int b, int c)
{
    cout << "ENTER THE FIRST VALUE: ";
    cin >> a;
    cout << "ENTER THE SECOND VALUE: ";
    cin >> b;
    cout << "ENTER THE THIRD VALUE: ";
    cin >> c;

    AM = (a + b + c) / 3;

    return AM;
}
