#include<iostream>
using namespace std;

int main()
{
    float tempC, tempF;

    cout<<"FAHRENHEIT\t CELCIUS"<<endl;
    for(tempF = 50; tempF <= 100; tempF += 5)
    {
        tempC = (5.0 / 9.0) * (tempF - 32); // here we are intializing the variable tempC... as tempF is used in this variable so in this case first we have to initialize tempF, otherwise it will give some error, that is why it is being initialized within the loop
        cout<<tempF<<"\t\t "<<tempC<<endl;    
    }
    return 0;
}