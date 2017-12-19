#ifndef __WINFACTORY_H__
#define __WINFACTORY_H__

#include "IFactory.h"

class IButton;
class IWindow;

class FactoryWin: public IFactory
{
public:
	FactoryWin() {};

	IButton* CreateButton() override;
	IWindow* CreateWindow() override;
};

#endif