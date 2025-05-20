#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string title;
    string author;
    string genre;
    int yearOfPublication;
};

int main()
{
    Book books[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for book " << i + 1 << ":\n";
        cout << "Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Genre: ";
        getline(cin, books[i].genre);
        cout << "Year of Publication: ";
        cin >> books[i].yearOfPublication;
        cin.ignore();
        cout << endl;
    }

    cout << "\nBook Details:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Book " << i + 1 << ":\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Genre: " << books[i].genre << endl;
        cout << "Year of Publication: " << books[i].yearOfPublication << endl
             << endl;
    }

    int earliestIndex = 0;
    for (int i = 1; i < 3; i++)
    {
        if (books[i].yearOfPublication < books[earliestIndex].yearOfPublication)
        {
            earliestIndex = i;
        }
    }

    cout << "Book with the earliest publication year:\n";
    cout << "Title: " << books[earliestIndex].title << endl;
    cout << "Author: " << books[earliestIndex].author << endl;
    cout << "Genre: " << books[earliestIndex].genre << endl;
    cout << "Year of Publication: " << books[earliestIndex].yearOfPublication << endl;

    return 0;
}
