#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"ENTER AN ALPHABET: ";
    cin>>c;

    if(c >= 'a' && c <= 'z')
    {
        cout<<c<<" IS A LOWERCASE ALPHABET..."<<endl;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        cout<<c<<" IS AN UPPERCASE ALPHABET..."<<endl;
    }
    else
    {
        cout<<"PLEASE ENTER A VALID ALPHABET..."<<endl;
    }

    return 0;
}