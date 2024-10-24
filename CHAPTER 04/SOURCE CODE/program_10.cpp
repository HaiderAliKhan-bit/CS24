#include <iostream>
using namespace std;

int main()
{
    int n;
    for (n = 1; n < 50; n = n + 2)
    {
        if (n % 5 == 0)
        {
            continue;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}