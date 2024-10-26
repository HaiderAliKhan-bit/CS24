#include <iostream>
using namespace std;

int n;
int prime(int num);

int main()
{
    cout << "ENTER A NUMBER TO CHECK WHETHER IT IS PRIME OR COMPOSITE: ";
    cin >> n;
    prime(n);
    return n;
}

int prime(int num)
{
    int c, p = 1;
    for (c = 2; c < num / 2; c++)
    
        if (num % c == 0)
        {
            p = 0;
            break;
        }
        if (p == 1)
        {
            cout << "THE ENTERED NUMBER IS A PRIME NUMBER..." << endl;
        }
        else
        {
            cout << "THE ENTERED NUMBER IS A COMPOSITE NUMBER..." << endl;
        }
    

    return 0;
}
