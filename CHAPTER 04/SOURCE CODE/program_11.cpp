#include<iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout<<"ENTER AN INTEGER TO GET ITS FACTORIAL: ";
    cin >>n;
    for(int a = 1; a <= n; a++)
    {
        fact = fact * a;
    }

    cout<<"THE FACTORIAL OF "<<n<<" IS "<<fact<<endl;
    return 0;

}