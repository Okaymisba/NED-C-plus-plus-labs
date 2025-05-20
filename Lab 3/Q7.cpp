#include <iostream>
#include <string>
using namespace std;

struct Product
{
    string productName;
    float price;
    int quantity;
};

int main()
{
    Product p;
    cout << "Enter product name: ";
    getline(cin, p.productName);
    cout << "Enter price: ";
    cin >> p.price;
    cout << "Enter quantity: ";
    cin >> p.quantity;

    float totalCost = p.price * p.quantity;

    cout << "Product Name: " << p.productName << endl;
    cout << "Total Cost: " << totalCost << endl;

    return 0;
}
