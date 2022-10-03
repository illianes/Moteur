#pragma once


class InputTrigger
{
public:
	InputTrigger()
	{
	}
	~InputTrigger()
	{
	}

	virtual void onKeyDown(int key) = 0;
	virtual void onKeyUp(int key) = 0;
	virtual void onMouseDown(int key) = 0;
	virtual void onMouseUp(int key) = 0;
};