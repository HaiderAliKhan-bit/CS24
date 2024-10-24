#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, root;
    cout<<"ENTER THE CO-EFFICIENT OF X^2: ";
    cin>>a;
    cout<<"ENTER THE CO-EFFICIENT OF X: ";
    cin>>b;
    cout<<"ENTER THE CONSTANT: ";
    cin>>c;
    
    root = sqrt((pow(b,2.0)) - (4.0 * a * c));


    x1 = (-b + root) / 2.0 * a;
    x2 = (-b - root) / 2.0 * a;

    if(root > 0)
    {
        cout<<"THE TWO VALUES OF X ARE "<<x1<<" "<<x2<<endl; 
    }
    else if(root == 0)
    {
        cout<<"THE VALUE OF X IS "<<x1<<endl;
    }
    else
    {
        cout<<"THE ROOTS ARE IMAGINARY..."<<endl;
    }

    return 0;
    

}