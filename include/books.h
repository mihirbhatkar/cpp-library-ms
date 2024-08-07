#ifndef BOOKS_H
#define BOOKS_H

#include <string>

class Book {
protected:
  int price;
  std::string name;
  std::string category;
  std::string author;

  static int counter;
  int id;

public:
  Book(int price, const std::string &name, const std::string &author,
       const std::string &category);

  int getPrice();
  int getId();
  std::string getName();
  std::string getAuthor();
  std::string getCategory();

  void printInfo();
};

#endif // !BOOKS_H
