#ifndef __STATEBROKEN_H__
#define __STATEBROKEN_H__

#include "IState.h"

class StateBroken :
	public IState
{
public:
	StateBroken(const std::string &_id = "Broken") : IState(_id) {};

	bool Use() override
	{
		printf("Used tool with state %s\n", GetId().c_str());
		return true;
	};
};

#endif