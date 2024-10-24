// TODO: GETTING TEMPERATURE IN FAHRENHEIT AND CONVERTING IT TO CELSIUS:

#include <iostream>
using namespace std;

int main()
{
    // INFO: DECLARATION OF VARIABLES:
    float tempF, tempC;
    // INFO: GETTING INPUT/ INITIALIZATION OF VARIABLES
    cout << "ENTER THE TEMPERATURE IN FAHRENHEIT: ";
    cin >> tempF;

    // INFO: INITIALIZATION OF VARIABLES
    tempC = (5.0 / 9.0) * (tempF - 32);

    // NOTE: PRINTING THE RESULT:
    cout << "TEMPERATURE IN CELCIUS IS: " << tempC << endl;
    return 0;
}