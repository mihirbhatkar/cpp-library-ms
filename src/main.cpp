#include <iostream>
#include "books.h"
#include "racks.h"
#include "bookshelf.h"

int main() {
    // Heap allocation of books
    Book* book1 = new Book(200, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction");
    Book* book2 = new Book(150, "To Kill a Mockingbird", "Harper Lee", "Fiction");
    Book* book3 = new Book(300, "1984", "George Orwell", "Dystopian");

    // Print book info
    book1->printInfo();
    book2->printInfo();
    book3->printInfo();

    // Heap allocation of a rack and adding books to it
    Rack* rack1 = new Rack();
    rack1->addBook(book1);
    rack1->addBook(book2);
    rack1->printAllBooks();

    // Remove a book from the rack
    rack1->removeBook(book2);
    rack1->printAllBooks();

    // Find a book by name
    std::string searchName = "1984";
    std::vector<Book*> foundBooks = rack1->findBookByName(searchName);
    for (Book* book : foundBooks) {
        book->printInfo();
    }

    // Heap allocation of a bookshelf and adding the rack to it
    std::string category = "Literature";
    BookShelf* shelf = new BookShelf(category);
    shelf->addRack(rack1);
    shelf->printAllBooks();

    // Add another book directly to the shelf
    shelf->addBook(book3);
    shelf->printAllBooks();

    // Find a book by ID
    Book* foundBook = shelf->findBookById(book3->getId());
    if (foundBook) {
        foundBook->printInfo();
    }

    // Remove a rack from the bookshelf
    shelf->removeRack(rack1);
    shelf->printAllBooks();

    // Clean up and delete heap-allocated memory
    delete shelf;  // This will delete all racks and books inside it
    return 0;
}
