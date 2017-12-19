#include "stdafx.h"
#include <vld.h>
#include "Receiver.h"
#include "CommandTurnOn.h"
#include "CommandTurnOff.h"
#include "Invoker.h"

int main()
{
	Receiver switch_receiver("Lamp");

	CommandTurnOn switch_on = CommandTurnOn(switch_receiver);
	CommandTurnOff switch_off = CommandTurnOff(switch_receiver);

	Invoker switch_operator("Lamp switch");

	switch_operator.ExecuteCommand(&switch_on);
	switch_operator.ExecuteCommand(&switch_off);

	system("pause");

	return 0;
}