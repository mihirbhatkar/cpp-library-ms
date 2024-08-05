#ifndef BOOKS_H
#define BOOKS_H

#include <string>

class Book {
protected:
  int price;
  std::string name;
  static int counter;
  int id;

public:
  Book(int price, const std::string &name);

  int getPrice();
  int getId();
  std::string getName();

  void printInfo();
};

class CBook : protected Book {
protected:
  std::string category;
  std::string author;

public:
  CBook(int price, const std::string &name, const std::string &author,
        const std::string &category);

  std::string getAuthor();
  std::string getCategory();

  void printInfo();
};

#endif // !BOOKS_H
