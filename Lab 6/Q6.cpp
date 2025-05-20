#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    void simplify()
    {
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction frac(20, 60);

    cout << "Before simplification: ";
    frac.display();

    frac.simplify();

    cout << "After simplification: ";
    frac.display();

    return 0;
}
