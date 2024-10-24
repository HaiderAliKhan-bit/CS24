#include <iostream>
using namespace std;

int main()
{
    float bPay, hRent, nPay;
    cout << "ENTER YOUR BASIC PAY: ";
    cin >> bPay;

    if (bPay < 30000)
    {
        hRent = (30.0 / 100) * bPay;
    }
    else if (bPay >= 30000 && bPay <= 50000)
    {
        hRent = (35.0 / 100) * bPay;
    }
    else
    {
        hRent = (40.0 / 100) * bPay;
    }

    nPay = bPay + hRent;
    cout << "YOUR NET PAY IS " << nPay << endl;

    return 0;
}