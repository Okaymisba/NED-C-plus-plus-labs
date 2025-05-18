#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getComputerChoice(int choice)
{
    if (choice == 0)
        return "Rock";
    else if (choice == 1)
        return "Paper";
    else
        return "Scissors";
}

string getWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        return "It's a Tie!";
    }
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
    {
        return "You Win!";
    }
    else
    {
        return "Computer Wins!";
    }
}

int main()
{
    srand(static_cast<unsigned>(time(0)));
    int userChoice, computerChoice;

    cout << "===== Rock, Paper, Scissors Game =====" << endl;
    cout << "Choose your option:\n";
    cout << "0. Rock\n";
    cout << "1. Paper\n";
    cout << "2. Scissors\n";
    cout << "Enter your choice (0, 1, or 2): ";
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 2)
    {
        cout << "Invalid choice! Please run the game again and choose 0, 1, or 2." << endl;
        return 1;
    }

    computerChoice = rand() % 3;

    cout << "\nYou chose: " << getComputerChoice(userChoice) << endl;
    cout << "Computer chose: " << getComputerChoice(computerChoice) << endl;

    cout << "\nResult: " << getWinner(userChoice, computerChoice) << endl;

    return 0;
}
