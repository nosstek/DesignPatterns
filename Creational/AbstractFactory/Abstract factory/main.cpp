#include "stdafx.h"
#include <vld.h>
#include "Client.h"

int main()
{
	printf("\n");
	Client c1 = Client(OperatingSystemT::os_Win);

	printf("\n");
	c1.RenderProgram();

	printf("\n");
	c1.SetMySystem(OperatingSystemT::os_Unix);

	printf("\n");
	c1.RenderProgram();

	printf("\n");
	system("pause");
	return 0;
}