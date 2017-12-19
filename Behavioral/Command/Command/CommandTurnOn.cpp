#include "StdAfx.h"
#include "CommandTurnOn.h"

#include "Receiver.h"

CommandTurnOn::CommandTurnOn(Receiver &_r) : ICommand("TurnOn"), m_receiver(&_r)
{
	/*printf("%s\n", "CommandTurnOn constructor");*/
}

void CommandTurnOn::Execute()
{
	printf("Executing %s cmd\n", GetId().c_str());
	if (m_receiver != NULL)
	{
		m_receiver->TurnOn();
	}
}