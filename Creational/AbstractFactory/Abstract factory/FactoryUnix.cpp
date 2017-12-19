#include "StdAfx.h"
#include "FactoryUnix.h"
#include "ButtonUnix.h"
#include "WindowUnix.h"

IButton* FactoryUnix::CreateButton()
{
	printf("\tCreating new ButtonUnix\n");
	IButton* button = new ButtonUnix();
	m_buttons.push_back(button);
	return button;
}

IWindow* FactoryUnix::CreateWindow()
{
	printf("\tCreating new WindowUnix\n");
	IWindow* window = new WindowUnix();
	m_windows.push_back(window);
	return window;
}