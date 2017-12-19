#include "StdAfx.h"
#include "Client.h"

#include "IButton.h"
#include "IWindow.h"

#include "FactoryWin.h"
#include "FactoryUnix.h"

void Client::RenderProgram()
{
	printf("Rendering Client window\n");
	FactoryWin win;
	FactoryUnix unix;

	IFactory* factory;

	switch (GetMySystem())
	{
	case os_Win:
		factory = &win;
		break;
	case os_Unix:
	case os_Unknown:
	default:
		factory = &unix;
	}

	if (factory != NULL)
	{
		IButton* button = factory->CreateButton();
		IWindow* window = factory->CreateWindow();
	}
}