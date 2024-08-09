#ifndef RACKS_H
#define RACKS_H

#include "books.h"
#include <string>
#include <vector>

class Rack {
private:
  static int counter;
  int id;
  int capacity; // default 10
  std::vector<Book *> books;

public:
  Rack();
  ~Rack();

  std::vector<Book *> getBooks();
  int totalBooks(); // return length of books vector
  void printAllBooks();

  Book *addBook(Book *book);
  void removeBook(Book *book);
  std::vector<Book *> findBookByName(std::string &search);
  Book *findBookById(int id);
};

#endif // !RACKS_H
