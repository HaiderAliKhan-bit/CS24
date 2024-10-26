#include <iostream>
using namespace std;

int l, w, area;
int rectangle(int a, int b);

int main()
{
    rectangle(l, w);
    cout << "THE AREA OF RECTANGLE IS: " << area << endl;

    return 0;
}

int rectangle(int a, int b)
{
    cout << "ENTER THE LENGHT OF RECTANGLE: ";
    cin >> l;
    cout << "ENTER THE WIDTH OF RECTANGLE: ";
    cin >> w;

    area = l * w;
    return area;
}
