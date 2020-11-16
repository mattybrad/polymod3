/***** MidiPolyChannel.h *****/

#pragma once

class MidiPolyChannel {
	public:
	MidiPolyChannel();
	int noteNum;
	bool isDown;
	unsigned long lastChange; // NB: update type if timeElapsed type changes

	private:

};
