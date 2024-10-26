#include <iostream>
using namespace std;

int main()
{
    int arr[10], max, inx;

    for (int a = 0; a < 10; a++)
    {
        cout << "ENTER A NUMBER: ";
        cin >> arr[a];
    }

    for (int b = 0; b < 10; b++)
    {
        if (arr[b] < max)
        {
            max = arr[b];
            inx = b;
        }
        else
        {
            continue;
        }
    }

    cout << "THE SMALLEST ENTERED NUMBER IS " << max << " HAVING INDEX " << inx << endl;
    return 0;
}