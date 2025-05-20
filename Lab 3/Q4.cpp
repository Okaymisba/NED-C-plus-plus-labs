#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNumber;
    string name;
    int age;
    float marks;
};

int main()
{
    Student students[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Marks: ";
        cin >> students[i].marks;
        cout << endl;
    }

    cout << "Student Details:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << ":\n";
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }

    int highestIndex = 0;
    for (int i = 1; i < 3; i++)
    {
        if (students[i].marks > students[highestIndex].marks)
        {
            highestIndex = i;
        }
    }

    cout << "Student with highest marks:\n";
    cout << "Roll Number: " << students[highestIndex].rollNumber << endl;
    cout << "Name: " << students[highestIndex].name << endl;
    cout << "Age: " << students[highestIndex].age << endl;
    cout << "Marks: " << students[highestIndex].marks << endl;

    return 0;
}
