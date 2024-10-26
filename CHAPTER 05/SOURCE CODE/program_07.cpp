#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "ENTER THE NUMBER OF ROWS(Elements in Coloumn): ";
    cin >> r;
    cout << "ENTER THE NUMBER OF COLOUMNS(Elements in Rows): ";
    cin >> c;

    int array[r][c];

    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            cout << "ENTER A VALUE: ";
            cin >> array[a][b];
        }
    }

    // Calculate and print the sum of each row
    for (int i = 0; i < r; ++i)
    {
        int row_sum = 0;
        for (int j = 0; j < c; ++j)
        {
            row_sum += array[i][j];
        }
        cout << "sum of row" << (i + 1) << " = " << row_sum << endl;
    }

    return 0;
}