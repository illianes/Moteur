#include "A4Engine/SoundManager.hpp"


SoundManager* SoundManager::instance = nullptr;

SoundManager::SoundManager()
{
	instance = this;
	initialized = true;
}


SoundManager::~SoundManager()
{
	if (!initialized)
		return;

	int source_state;

}


void SoundManager::play(AudioObject* AudioObj, float gain, float x, float y, float z, float dirX, float dirY, float dirZ)
{
	if (!initialized)
		return;
	int count;
	if (AudioObj == nullptr)
	{
		if (verbose)
			count++;
		return;
	}
}
unsigned int SoundManager::getSoundSource()
{
	return 0;
}

unsigned int SoundManager::getSoundSource()
{
	if (!initialized)
		return 0;


	unsigned int firstFree = getSoundSource();
	if (firstFree > 0)
		return firstFree;

	firstFree = getSoundSource();
	if (firstFree > 0)
		return firstFree;

	return 0;
}