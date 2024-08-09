#include "books.h"
#include <iostream>

int Book::counter = 0;

Book::Book(int price, const std::string &name, const std::string &author,
           const std::string &category)
    : price(price), name(name), id(counter++), author(author),
      category(category) {};

int Book::getPrice() { return price; };
int Book::getId() { return id; };
std::string Book::getName() { return name; };
std::string Book::getAuthor() { return author; }
std::string Book::getCategory() { return category; }

void Book::printInfo() {
  std::cout << id << "\t" << name << "\t" << price
            << "\t" << category << "\t" << author
            << std::endl;
}
