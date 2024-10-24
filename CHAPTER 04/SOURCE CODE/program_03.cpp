#include <iostream>
using namespace std;

int main()
{
    float a, b, c, max;

    cout << "ENTER THE FIRST NUMBER: ";
    cin >> a;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> b;
    cout << "ENTER THE THIRD NUMBER: ";
    cin >> c;

    if (a > b)
    {
        max = a;
        if (c > max)
        {
            max = c;
        }
    }
    else
    {
        max = b;
        if (c > max)
        {
            max = c;
        }
    }

    cout << max << " IS THE LARGEST NUMBER..." << endl;

    return 0;
}