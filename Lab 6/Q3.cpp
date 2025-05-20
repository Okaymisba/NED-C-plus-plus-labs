#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string n, double s)
    {
        name = n;
        salary = s;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    Employee emp("Alice", 55000);

    emp.display();

    return 0;
}
