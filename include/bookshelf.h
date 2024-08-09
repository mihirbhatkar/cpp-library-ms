#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include "books.h"
#include "racks.h"
#include <string>
#include <vector>

class BookShelf{
private:
  int id;
  static int counter;
  int capacity = 30;
  std::vector<Rack *> racks; // max racks in a shelf = 3
  std::string category;

public:
  BookShelf(std::string &category);
  ~BookShelf();
  int totalBooks(); // return length of all racks
  void printAllBooks();
  Rack* addRack(Rack* rack);
  void removeRack(Rack* rack);
  void removeBook(Book *book);
  Book* addBook(Book* book);
  std::vector<Book *> findBookByName(std::string &search);
  Book *findBookById(int id);
};

#endif // !BOOKSHELF_H
