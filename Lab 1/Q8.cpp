#include <iostream>

using namespace std;

int main()
{
    double principal, rate, time, simpleInterest;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (in % per year): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;

    cout << "The Simple Interest is: " << simpleInterest << endl;

    return 0;
}
