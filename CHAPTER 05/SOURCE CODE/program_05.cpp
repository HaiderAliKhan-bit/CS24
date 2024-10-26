#include <iostream>
using namespace std;

int main()
{
    int array[3][4] = {
        {4, 18, -16, 11},
        {-5, 10, -2, 12},
        {15, -3, 17, 18}};
    int sum = 0;

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            if (array[a][b] > 0)
            {
                sum = sum + array[a][b];
            }
        }
    }

    cout << "THE SUM OF POSITIVE NUMBERS IS: " << sum << endl;
    return 0;
}