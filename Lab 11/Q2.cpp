#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string t, string a) : title(t), author(a) {}

    void display() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class Library
{
private:
    vector<Book> books;

public:
    void addBook(const Book &book)
    {
        books.push_back(book);
    }

    void displayBooks() const
    {
        for (const auto &book : books)
        {
            book.display();
            cout << endl;
        }
    }
};

int main()
{
    Book b1("1984", "George Orwell");
    Book b2("To Kill a Mockingbird", "Harper Lee");

    Library library;
    library.addBook(b1);
    library.addBook(b2);

    library.displayBooks();

    return 0;
}
