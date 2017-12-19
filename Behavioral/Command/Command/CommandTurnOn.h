#ifndef __COMMANDTURNON_H__
#define __COMMANDTURNON_H__

#include "ICommand.h"

class Receiver;

class CommandTurnOn :
	public ICommand
{
public:
	CommandTurnOn(Receiver &_r);

	void Execute() override;

private:
	Receiver* m_receiver;
};

#endif