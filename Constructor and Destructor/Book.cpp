
#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pages;

public:
    // Constructor
    Book(std::string t, std::string a, int p) {
        title = t;
        author = a;
        pages = p;
        std::cout << "Book object created: " << title << " by " << author << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Book object destroyed: " << title << " by " << author << std::endl;
    }

    // Method to display book information
    void displayInfo() {
        std::cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << std::endl;
    }
};

int main() {
    Book book1("To Kill a Mockingbird", "Harper Lee", 281);
    book1.displayInfo();

    Book book2("1984", "George Orwell", 328);
    book2.displayInfo();

    return 0;
}