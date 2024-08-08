#include <iostream>
#include "books.h"
#include "racks.h"
#include "bookshelf.h"

int main() {
    Book book1(200, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction");
    Book book2(150, "To Kill a Mockingbird", "Harper Lee", "Fiction");
    Book book3(300, "1984", "George Orwell", "Dystopian");
    std::cout << "\n\n" << std::endl;
    book1.printInfo();
    std::cout << "\n\n" << std::endl;
    book2.printInfo();
    std::cout << "\n\n" << std::endl;
    book3.printInfo();
    std::cout << "\n\n" << std::endl;

    Rack rack1;
    rack1.addBook(&book1);
    std::cout << "\n\n" << std::endl;
    rack1.addBook(&book2);
    std::cout << "\n\n" << std::endl;
    rack1.printAllBooks();
    std::cout << "\n\n" << std::endl;

    rack1.removeBook(&book2);
    std::cout << "\n\n" << std::endl;
    rack1.printAllBooks();
    std::cout << "\n\n" << std::endl;

    std::string searchName = "1984";
    std::vector<Book *> foundBooks = rack1.findBookByName(searchName);
    for (Book *book : foundBooks) {
        book->printInfo();
    }

    std::cout << "\n\n" << std::endl;
    std::string category = "Literature";
    BookShelf shelf(category);
    shelf.addRack(&rack1);
    std::cout << "\n\n" << std::endl;
    shelf.printAllBooks();
    std::cout << "\n\n" << std::endl;

    shelf.addBook(&book3);
    std::cout << "\n\n" << std::endl;
    shelf.printAllBooks();
    std::cout << "\n\n" << std::endl;

    Book *foundBook = shelf.findBookById(book3.getId());
    if (foundBook) {
        foundBook->printInfo();
    }
    std::cout << "\n\n" << std::endl;

    shelf.removeRack(&rack1);
    std::cout << "\n\n" << std::endl;
    shelf.printAllBooks();
    std::cout << "\n\n" << std::endl;

    return 0;
}
