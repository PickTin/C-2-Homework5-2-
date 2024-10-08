#include "Book.h"
#include <iostream>

Book::Book(const string& author, const string& edition, const string& publicationDate, long isbn)
    : author(author), edition(edition), publicationDate(publicationDate), isbn(isbn) {}

string Book::getAuthor() const {
    return author;
}

string Book::getEdition() const {
    return edition;
}

string Book::getPublicationDate() const {
    return publicationDate;
}

long Book::getIsbn() const {
    return isbn;
}

void Book::displayInfo() const {
    cout << "Author: " << author << endl;
    cout << "Edition: " << edition << endl;
    cout << "Publication Date: " << publicationDate << endl;
    cout << "ISBN: " << isbn << endl;
}
