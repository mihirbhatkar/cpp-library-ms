#include "racks.h"
#include "utility.h"
#include <cwctype>
#include <iostream>
#include <regex>
#include <vector>

int Rack::counter = 0;

Rack::Rack() : capacity(10), id(counter++), books({}) {};

int Rack::totalBooks() { return books.size(); };

void Rack::printAllBooks() {
  for (Book *book : books) {
    book->printInfo();
  }
}

Book *Rack::addBook(Book *book) {
  if (books.size() <= capacity) {
    std::cout << "Book added to rack id " << id << std::endl;
    books.push_back(book);
    return book;
  }

  std::cout << "No more space in rack id " << id << std::endl;
  return nullptr;
}

Book *Rack::removeBook(Book *book) {
  for (auto it = books.begin(); it <= books.end(); it++) {
    Book *ptr = *it;
    if (book == ptr) {
      books.erase(it);

      std::cout << "Book removed from rack id " << id << std::endl;
      return book;
    }
  }

  std::cout << "Book not found in rack id " << id << std::endl;
  return nullptr;
}

std::vector<Book *> Rack::findBookByName(std::string &search) {
  std::vector<Book *> results;
  std::string searchStr = toLowerCase(search);

  std::regex pattern("^" + searchStr);
  for (int i = 0; i < books.size(); i++) {
    Book *book = books[i];
    std::string bookName = toLowerCase(book->getName());
    if (std::regex_search(bookName, pattern)) {
      results.push_back(book);
    }
  }

  return results;
};

Book *Rack::findBookById(int id) {

  for (Book *book : books) {
    if (book->getId() == id) {
      return book;
    }
  }
  return nullptr;
};
