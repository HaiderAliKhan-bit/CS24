// TODO: INTAKE LENGHT AND BREADTH OF A RECTANGLE AND PRINTING OUT THE AREA

#include<iostream>
using namespace std;

int main()
{
    // NOTE: DECLARATION OF VARIABLES: 
    float l, w, area;

    // NOTE: GETTING INPUT/ INITIALIZATION OF VARIABLES 
    cout<<"ENTER THE LENGHT OF RECTANGLE: ";
    cin >> l;
    cout<<"ENTER THE WIDTH OF RECTANGLE: ";
    cin >>w;
    // NOTE: INITIALIZATION OF VARIABLES 
    area = l*w;

    // NOTE: PRINTING THE RESULT:
    cout<<"THE AREA OF RECTANGLE IS: "<<area<<endl;
    return 0;
}