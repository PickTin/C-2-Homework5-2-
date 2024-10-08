#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
protected:
    string author;
    string edition;
    string publicationDate;
    long isbn;

public:
    Book(const string& author, const string& edition, const string& publicationDate, long isbn);

    string getAuthor() const;
    string getEdition() const;
    string getPublicationDate() const;
    long getIsbn() const;

    virtual void displayInfo() const;
};

#endif 
