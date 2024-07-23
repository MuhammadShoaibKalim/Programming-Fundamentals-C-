#include <iostream>
using namespace std;

struct Book {
    int BookId;
    float Price;
    int Pages;
};

int main() {
    Book book1, book2;


    cout << "Enter details for the first book:\n";
    cout << "Book ID: ";
    cin >> book1.BookId;
    cout << "Price: ";
    cin >> book1.Price;
    cout << "Pages: ";
    cin >> book1.Pages;


    cout << "Enter details for the second book:\n";
    cout << "Book ID: ";
    cin >> book2.BookId;
    cout << "Price: ";
    cin >> book2.Price;
    cout << "Pages: ";
    cin >> book2.Pages;

    if (book1.Price > book2.Price) {
        cout << "\nThe more costly book is:\n";
        cout << "Book ID: " << book1.BookId << endl;
        cout << "Price: " << book1.Price << endl;
        cout << "Pages: " << book1.Pages << endl;
    } else if (book2.Price > book1.Price) {
        cout << "\nThe more costly book is:\n";
        cout << "Book ID: " << book2.BookId << endl;
        cout << "Price: " << book2.Price << endl;
        cout << "Pages: " << book2.Pages << endl;
    } else {
        cout << "\nBoth books have the same price.\n";
        cout << "Book 1 ID: " << book1.BookId << endl;
        cout << "Price: " << book1.Price << endl;
        cout << "Pages: " << book1.Pages << endl;

        cout << "Book 2 ID: " << book2.BookId << endl;
        cout << "Price: " << book2.Price << endl;
        cout << "Pages: " << book2.Pages << endl;
    }

    return 0;
}
