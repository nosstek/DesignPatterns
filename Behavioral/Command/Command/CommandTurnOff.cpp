#include "StdAfx.h"
#include "CommandTurnOff.h"

#include "Receiver.h"

CommandTurnOff::CommandTurnOff(Receiver &_r) : ICommand("TurnOff"), m_receiver(&_r)
{
	/*printf("%s\n", "CommandTurnOff constructor");*/
}

void CommandTurnOff::Execute()
{
	printf("Executing %s cmd\n", GetId().c_str());
	if (m_receiver != NULL)
	{
		m_receiver->TurnOff();
	}
}