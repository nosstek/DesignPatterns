#include "StdAfx.h"
#include "FactoryWin.h"
#include "ButtonWin.h"
#include "WindowWin.h"

IButton* FactoryWin::CreateButton()
{
	printf("\tCreating new ButtonWin\n");
	IButton* button = new ButtonWin();
	m_buttons.push_back(button);
	return button;
}

IWindow* FactoryWin::CreateWindow()
{
	printf("\tCreating new WindowWin\n");
	IWindow* window = new WindowWin();
	m_windows.push_back(window);
	return window;
}