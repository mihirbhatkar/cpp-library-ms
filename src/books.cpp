#include "books.h"
#include <iostream>

int Book::counter = 0;

Book::Book(int price, const std::string &name)
    : price(price), name(name), id(counter++) {};

CBook::CBook(int price, const std::string &name, const std::string &author,
             const std::string &category)
    : Book(price, name), author(author), category(category) {};

int Book::getPrice() { return price; };

int Book::getId() { return id; };

std::string CBook::getAuthor() { return author; }

std::string CBook::getCategory() { return category; }

void CBook::printInfo() {
  std::cout << "Id: " << id << ", Name: " << name << ", Price: " << price
            << ", Category: " << category << ", Author: " << author
            << std::endl;
}
