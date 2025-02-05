#include <iostream>

using namespace std;

int main()
{
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << "Time: " << endl
         << hours << " hours, " << endl
         << minutes << " minutes, " << endl
         << seconds << " seconds" << endl;

    return 0;
}
