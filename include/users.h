#ifndef USERS_H
#define USERS_H

#include <string>
/*struct VisitTime {*/
/*  std::chrono::time_point<std::chrono::system_clock> inTime;*/
/*  std::chrono::time_point<std::chrono::system_clock> outTime;*/
/*};*/
/**/
/*struct BorrowedBook {*/
/*  Book *book;*/
/*  std::chrono::time_point<std::chrono::system_clock> borrowTime;*/
/*  std::chrono::time_point<std::chrono::system_clock> returnTime;*/
/*};*/

class User {
protected:
  int id;
  std::string name;
  int phone;

public:
  User(std::string name, int phone);
  int getId();
};

class Staff : protected User{
private:
  std::string username;
};

#endif // !USERS_H
