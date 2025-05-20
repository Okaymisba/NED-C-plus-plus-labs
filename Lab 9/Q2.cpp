#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary() = 0;
    virtual ~Employee() {}
};

class PermanentEmployee : public Employee
{
private:
    double basicPay, allowance;

public:
    PermanentEmployee(double basic, double allow) : basicPay(basic), allowance(allow) {}

    double calculateSalary() override
    {
        return basicPay + allowance;
    }
};

class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() override
    {
        return hourlyRate * hoursWorked;
    }
};

int main()
{
    PermanentEmployee pEmp(30000, 8000);
    ContractEmployee cEmp(500, 40);

    cout << "Permanent Employee Salary: " << pEmp.calculateSalary() << endl;
    cout << "Contract Employee Salary: " << cEmp.calculateSalary() << endl;

    return 0;
}
