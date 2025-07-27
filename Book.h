//
// Created by NextLevel on 27.7.2025 г..
//

#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;


class Book {
    string id;
    string title;
    double pricePerDay;
    bool borrowed;
    int borrowDay;
    int borrowerId;

public:
    Book(const string& id, double price, const string& title);

    const string& getId() const;
    const string& getTitle() const;
    double getPricePerDay() const;

    bool isBorrowed()const;
    int getBorrowDay()const;
    int getBorrowerID()const;

    void lendTo(int clientId, int currentDay);
    void returned();

};
#endif //BOOK_H
