#include "VoiceRecording.h"
#include <iostream>

VoiceRecording::VoiceRecording(const string& speaker, int duration, const string& recordingDate)
    : speaker(speaker), duration(duration), recordingDate(recordingDate) {}

string VoiceRecording::getSpeaker() const {
    return speaker;
}

int VoiceRecording::getDuration() const {
    return duration;
}

string VoiceRecording::getRecordingDate() const {
    return recordingDate;
}

void VoiceRecording::displayInfo() const {
    cout << "Speaker: " << speaker << endl;
    cout << "Duration: " << duration << " minutes" << endl;
    cout << "Recording Date: " << recordingDate << endl;
}
