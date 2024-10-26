#include <iostream>
using namespace std;

int l, ar, p;
int area(int a);
int perimeter(int b);

int main()
{
    area(l);
    perimeter(l);

    cout << "THE AREA OF SQUARE IS " << ar << " AND THE PERIMETER IS " << p << endl;

    return 0;
}

int area(int a)
{
    cout << "ENTER THE LENGHT OF SQUARE: ";
    cin >> l;

    ar = l * l;

    return a;
}

int perimeter(int b)
{
    cout << "ENTER THE LENGHT OF SQUARE: ";
    cin >> l;

    p = 4 * l;
    return p;
}
