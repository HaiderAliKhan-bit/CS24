#include <iostream>
using namespace std;

int main()
{
    int array1[2][4] = {{14, 8, 11, 10}, {15, 12, 20, 3}}, array2[2][4] = {{2, 3, 4, 7}, {6, 7, 8, 9}}, array3[2][4];

    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            array3[a][b] = array1[a][b] + array2[a][b];
        }
    }

    for (int c = 0; c < 2; c++)
    {
        for (int d = 0; d < 4; d++)
        {
            cout << array3[c][d] << " ";
        }
        cout << endl;
    }

    return 0;
}