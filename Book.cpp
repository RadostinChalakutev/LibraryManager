#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(const string& id, double price, const string& title)
    :id(id), title(title), pricePerDay(price),borrowed(false),
        borrowDay(0),borrowerId(-1){}

const string& Book::getId() const{return id;}
const string& Book::getTitle() const{return title;}
double Book::getPricePerDay() const{return pricePerDay;}

bool Book::isBorrowed()const{return borrowed;}
int Book::getBorrowDay()const{return borrowDay;}
int Book::getBorrowerID() const {return borrowerId;}

void Book::lendTo(int clientId, int currentDay) {
    if (borrowed) {
        cout<<title<<" is already borrowed.";
        borrowed=true;
        borrowerId=clientId;
        borrowDay=currentDay;

    }
}


