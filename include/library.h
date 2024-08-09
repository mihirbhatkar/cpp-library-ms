#ifndef LIBRARY_H
#define LIBRARY_H

#include "bookshelf.h"
#include <vector>

class Library {
private:
  std::vector<BookShelf *> bookShelfs = {}; 

public:
  Library();
  int totalBooks();
  BookShelf* addBookShelf(BookShelf* bookShelf);
  BookShelf* removeBookShelf(BookShelf* bookShelf);
};

#endif // !LIBRARY_H
