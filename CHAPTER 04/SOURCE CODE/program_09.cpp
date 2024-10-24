#include<iostream>
using namespace std;

int main()
{
    int sum = 0, n = 30;

    while(n <= 60)
    {
        sum = sum + n;
        n = n + 3;
    } 


    cout<<"THE SUM OF GIVEN SERIES IS: "<<sum<<endl;
    return 0;

}