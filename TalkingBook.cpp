#include "TalkingBook.h"
#include <iostream>

TalkingBook::TalkingBook(const string& author, const string& edition, const string& publicationDate, long isbn,
    const string& speaker, int duration, const string& recordingDate, int tapes)
    : Book(author, edition, publicationDate, isbn), VoiceRecording(speaker, duration, recordingDate), tapes(tapes) {}

int TalkingBook::getTapes() const {
    return tapes;
}

void TalkingBook::displayInfo() const {
    Book::displayInfo();
    VoiceRecording::displayInfo();
    cout << "Number of Tapes: " << tapes << endl;
}
