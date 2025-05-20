#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void processPayment(double amount) = 0;
    virtual ~Payment() {}
};

class CreditCardPayment : public Payment
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

class PaypalPayment : public Payment
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing PayPal payment of $" << amount << endl;
    }
};

int main()
{
    Payment *payment;

    CreditCardPayment ccPayment;
    PaypalPayment ppPayment;

    payment = &ccPayment;
    payment->processPayment(150.75);

    payment = &ppPayment;
    payment->processPayment(99.99);

    return 0;
}
