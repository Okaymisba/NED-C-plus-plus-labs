#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
    int day, month, year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void display()
    {
        cout << day << "/" << month << "/" << year;
    }
};

class Book
{
private:
    string title;
    string author;
    Date publicationDate;

public:
    Book(string t, string a, Date d) : title(t), author(a), publicationDate(d) {}

    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Date: ";
        publicationDate.display();
        cout << endl;
    }
};

int main()
{
    Date pubDate(15, 8, 2021);
    Book book("Atomic Habits", "James Clear", pubDate);
    book.displayDetails();

    return 0;
}
