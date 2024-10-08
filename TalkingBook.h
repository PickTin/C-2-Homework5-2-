#ifndef TALKINGBOOK_H
#define TALKINGBOOK_H

#include "Book.h"
#include "VoiceRecording.h"

class TalkingBook : public Book, public VoiceRecording {
private:
    int tapes;

public:
    TalkingBook(const string& author, const string& edition, const string& publicationDate, long isbn,
        const string& speaker, int duration, const string& recordingDate, int tapes);

    int getTapes() const;
    void displayInfo() const override;
};

#endif // TALKINGBOOK_H
