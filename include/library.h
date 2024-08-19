#ifndef LIBRARY_H
#define LIBRARY_H

#include "bookshelf.h"
#include <vector>

class Library {
private:
  std::vector<BookShelf *> bookShelfs = {}; 
  static int totalBooks;

public:
  Library();
  BookShelf* addBookShelf(BookShelf* bookShelf);
  BookShelf* removeBookShelf(BookShelf* bookShelf);
};

#endif // !LIBRARY_H
