#ifndef __UNIXFACTORY_H__
#define __UNIXFACTORY_H__

#include "IFactory.h"

class FactoryUnix: public IFactory
{
public:
	FactoryUnix() {};
	IButton* CreateButton() override;
	IWindow* CreateWindow() override;
};

#endif