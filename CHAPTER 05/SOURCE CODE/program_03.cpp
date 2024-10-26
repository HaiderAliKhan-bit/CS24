#include <iostream>
using namespace std;

int main()
{
    int arr[15] = {4, 8, 5, 1, 3, 5, 0, 12, 5, 7, 3, 15, 8, 4, 11};
    int counter = 0;

    for (int a = 0; a < 16; a++)
    {
        if (arr[a] == 5)
        {
            counter++;
        }
        else
        {
            continue;
        }
    }

    cout << "THE NUMBER OF TIMES 5 APPEARED IN THE GIVEN ARRAY IS: " << counter << endl;
    return 0;
}