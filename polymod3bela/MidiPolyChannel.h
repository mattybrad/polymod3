/***** MidiPolyChannel.h *****/

#pragma once

class MidiPolyChannel {
	public:
	MidiPolyChannel();
	int noteNum;
	bool isDown;
	unsigned long lastChange = 0; // NB: update type if timeElapsed type changes

	private:

};
