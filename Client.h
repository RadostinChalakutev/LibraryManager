

#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "Book.h"
using namespace std;

class Client{
protected:
    int id;
    string firstName, lastName;
    int borrowedBookIndex;

public:
Client(int id, const string& fn, const string& ln);
virtual ~Client()=default;

int getId() const;
const string& getFirstName() const;
const string& getLastName() const;

bool hasBook() const;
int getBorrowedBookIndex() const;
void assignBook(int bookIndex);
void clearBook();

virtual double returnBookFee(const Book& book, int currentDay) const=0;
virtual string oweMessage(double fee) const=0;
};
#endif //CLIENT_H
