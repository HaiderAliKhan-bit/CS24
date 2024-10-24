#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    sum = 0;

    for (n = 30; n <= 60; n = n + 3)
    {
        sum = sum + n;
    }

    cout << "THE SUM OF SERIES IS :" << sum << endl;
    return 0;
}