#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;

    while (true)
    {
        cout << "\n====== Simple Calculator ======" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an operation (1-5): ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
}
