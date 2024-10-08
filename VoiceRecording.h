#ifndef VOICERECORDING_H
#define VOICERECORDING_H

#include <string>
using namespace std;

class VoiceRecording {
protected:
    string speaker;
    int duration;
    string recordingDate;

public:
    VoiceRecording(const string& speaker, int duration, const string& recordingDate);

    string getSpeaker() const;
    int getDuration() const;
    string getRecordingDate() const;

    virtual void displayInfo() const;
};

#endif 
