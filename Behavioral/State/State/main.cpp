#include "stdafx.h"
#include <vld.h>
#include "StateBroken.h"
#include "StateFunctional.h"
#include "ToolBroom.h"
#include "ToolHammer.h"

int main()
{
	StateBroken broken_state;
	StateFunctional functional_state;

 	ToolHammer hammer(&broken_state);
	ToolBroom broom(&functional_state);

	printf(hammer.UseTool() ? "Success!\n" : "Failure\n");

	printf(broom.UseTool() ? "Success!\n" : "Failure\n");

	hammer.SetState(&functional_state);

	printf(hammer.UseTool() ? "Success!\n" : "Failure\n");

	system("pause");
	return 0;
}