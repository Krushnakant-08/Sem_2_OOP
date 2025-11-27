#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string name;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        name = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string n, string a, double p) {
        name = n;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book& b) {
        name = b.name;
        author = b.author;
        price = b.price;
    }

    // Method to display the book details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl << endl;
   }
};

int main() {
    // Using default constructor
    Book book1;
    book1.display();

    // Using parameterized constructor
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 100.99);
    book2.display();

    // Using copy constructor 
    Book book3(book2);
    book3.display();

    return 0;
}
