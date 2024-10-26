#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{6, 3}, {7, 8}, {4, 5}};

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            cout << arr[a][b] << "\t";
        }
        cout << endl;
    }
    return 0;
}