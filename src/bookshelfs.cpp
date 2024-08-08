#include "bookshelf.h"
#include <iostream>
#include <ostream>

int BookShelf::counter = 0;

BookShelf::BookShelf(std::string &category)
    : category(category), id(counter++), racks({}){};

int BookShelf::totalBooks() {
  int sum = 0;
  for (Rack *rack : racks)
    sum += rack->totalBooks();
  return sum;
}; // return length of all racks

void BookShelf::printAllBooks() {
  std::cout << "List of books in bookshelf " << id << "(" << category << ")"
            << std::endl;
  for (Rack *rack : racks)
    rack->printAllBooks();
};

Rack *BookShelf::addRack(Rack *rack) {
  if (racks.size() == 3) {
    std::cout << "This bookshelf already has 3 racks! " << std::endl;
    return nullptr;
  }
  racks.push_back(rack);

  return rack;
};

Rack *BookShelf::removeRack(Rack *rack) {

  if (racks.size() == 0)
    return nullptr;

  for (auto it = racks.begin(); it <= racks.end(); it++) {
    Rack *ptr = *it;
    if (rack == ptr) {
      std::cout << "Rack removed successfully!" << std::endl;
      racks.erase(it);
      return rack;
    }
  }

  return nullptr;
};

Book *BookShelf::removeBook(Book *book) {

  for (Rack *rack : racks) {
    if (rack->removeBook(book) == nullptr)
      continue;
    std::cout << "Book deleted successfully from bookshelf " << id << std::endl;
    return book;
  }

  std::cout << "Book does not exist in bookshelf " << id << std::endl;
  return nullptr;
};

Book *BookShelf::addBook(Book *book) {
  if (totalBooks() == 30) {
    std::cout << "This bookshelf is full! Id: " << id << std::endl;
    return nullptr;
  }

  for (Rack *rack : racks) {
    if (rack->addBook(book) == nullptr)
      continue;
    std::cout << "Book added successfully to bookshelf " << id << std::endl;
    return book;
  }

  return nullptr;
};

std::vector<Book *> BookShelf::findBookByName(std::string &search) {
  for (Rack *rack : racks) {
    std::vector<Book *> vec = rack->findBookByName(search);
    if (vec.size() == 0)
      continue;
    return vec;
  }

  std::cout << "Found no results in bookshelf " << id << std::endl;
  return {};
};

Book *BookShelf::findBookById(int id) {
  for (Rack *rack : racks) {
    Book *book = rack->findBookById(id);
    if (book == nullptr)
      continue;
    std::cout << "Book found in bookshelf " << id << std::endl;
    return book;
  }

  std::cout << "Book NOT found in bookshelf " << id << std::endl;
  return nullptr;
};
