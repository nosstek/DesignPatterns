#ifndef __COMMANDTURNOFF_H__
#define __COMMANDTURNOFF_H__

#include "ICommand.h"

class Receiver;

class CommandTurnOff :
	public ICommand
{
public:
	CommandTurnOff(Receiver &_r);

	void Execute() override;

private:
	Receiver* m_receiver;
};

#endif