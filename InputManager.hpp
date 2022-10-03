#pragma once
#include "InputTrigger.hpp"
#include <unordered_set>

class InputManager
{
public:
	InputManager();
	~InputManager();

	void update();
	void addTrigger(InputTrigger* trigger);
	void removeTrigger(InputTrigger* trigger);

public:
	static InputManager* get();
private:
	std::unordered_set<InputTrigger*> m_set_trigger;
	unsigned char m_keys_state[256] = {};
	unsigned char m_old_keys_state[256] = {};
};