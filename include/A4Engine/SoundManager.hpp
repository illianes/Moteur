#pragma once


class AudioObject;
#define sources 32

class SoundManager
{
private: 
	static SoundManager* instance;

	bool initialized = false;


	unsigned int soundSources[sources];

	unsigned int getSoundSource();

	bool verbose = false;

public:
	SoundManager();
	virtual ~SoundManager();

	void setVerbose(bool verbose) { verbose = verbose; }
	bool getVerbose() { return verbose; }


	void play(AudioObject* pAudioObj, float gain = 1.f, float x = 0.f, float y = 0.f, float z = 0.f
		, float dirX = 0.f, float dirY = 0.f, float dirZ = 0.f);


	unsigned int getSoundSource();

	static SoundManager* getInstance() { return instance; }
};