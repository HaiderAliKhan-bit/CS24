// TODO: INTAKE 4 VALUES AND PRINT THEIR SUM, PRODUCT AND AVERAGE...

#include<iostream>
using namespace std;

int main()
{

    int a, b, c, d, sum, product, avg;
    // NOTE: GETTING VALUES FROM THE USER: 

    cout << "ENTER THE FIRST NUMBER: ";
    cin >> a;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> b;
    cout<<"ENTER THE THIRD NUMBER: ";
    cin >> c;
    cout << "ENTER THE FOURTH NUMBER: ";
    cin >> d;

    // NOTE: VARIABLE INITIALIZATION: 
    sum = a+b+c+d;
    product = a*b*c*d;
    avg = sum/4;

    // NOTE: PRINTING RESULTS:
    cout<<"SUM OF GIVEN NUMBERS IS: "<<sum<<endl;
    cout<<"PRODUCT OF GIVEN NUMBERS IS: "<<product<<endl;
    cout<<"AVERAGE OF GIVEN NUMBERS IS: "<<avg<<endl;

    return 0;
}