#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));

    int randomNumber = (rand() % 100) + 1;
    int guess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts!" << endl;
            break;
        }
    }

    return 0;
}
