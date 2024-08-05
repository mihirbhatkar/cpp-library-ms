#include "books.h"
#include <iostream>

int main() {
  Book b1(100, "Tale of two cities");
  Book b2(150, "1984");

  std::cout << b1.getId() << std::endl;
  std::cout << b2.getId() << std::endl;

  return 0;
}
