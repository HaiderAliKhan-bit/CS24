#include <iostream>
using namespace std;

int main()
{
    int n, square, cube;
    cout<<"ENTER THE n: ";
    cin>>n;

    cube = n*n*n;
    square = n*n;

    if (n > 10)
    {
        cout<<"THE SQUARE OF THE NUMBER IS: "<<square<<endl;
    }
    else
    {
        cout<<"THE CUBE OF THE NUMBER IS: "<<cube<<endl;
    }
    
    return 0;
}