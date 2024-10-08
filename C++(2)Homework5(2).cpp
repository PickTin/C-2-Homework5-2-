#include <iostream>
#include "Book.h"
#include "VoiceRecording.h"
#include "TalkingBook.h"

int main() {
    Book book("J.K. Rowling", "1st Edition", "1997-06-26", 9780747532743);
    book.displayInfo();
    cout << endl;

    VoiceRecording recording("Stephen Fry", 1200, "2003-11-20");
    recording.displayInfo();
    cout << endl;

    TalkingBook talkingBook("J.K. Rowling", "1st Edition", "1997-06-26", 9780747532743, "Stephen Fry", 1200, "2003-11-20", 8);
    talkingBook.displayInfo();
}
