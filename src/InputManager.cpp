#include "InputManager.hpp"
#include <Windows.h>


InputManager::InputManager()
{
}


InputManager::~InputManager()
{
}

void InputManager::update()
{
	if (::GetKeyboardState(m_keys_state))
	{
		for (unsigned int i = 0; i < 256; i++)
		{
			if (m_keys_state[i] & 0x80)
			{
				std::unordered_set<InputTrigger*>::iterator it = m_set_trigger.begin();

				while (it != m_set_trigger.end())
				{
					(*it)->onKeyDown(i);
					++it;
				}
			}
			else
			{
				if (m_keys_state[i] != m_old_keys_state[i])
				{
					std::unordered_set<InputTrigger*>::iterator it = m_set_trigger.begin();

					while (it != m_set_trigger.end())
					{
						(*it)->onKeyUp(i);
						++it;
					}
				}

			}

		}
		::memcpy(m_old_keys_state, m_keys_state, sizeof(unsigned char) * 256);
	}
}

void InputManager::addTrigger(InputTrigger* trigger)
{
	m_set_trigger.insert(trigger);
}

void InputManager::removeTrigger(InputTrigger* trigger)
{
	m_set_trigger.erase(trigger);
}

InputManager* InputManager::get()
{
	static InputManager system;
	return &system;
}