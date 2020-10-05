
#ifndef _Drum_h
#define _Drum_h

#define delayTime 100

class Drum{
public:
	void begin();
	void sendKey(char);
	bool hitDrum(int);
	int senseTouch(int);
	void checkValue(int);
	void setThreshold(int);
private:
	int threshold;
};

#endif