#ifndef __IABSTRACTFACTORY_H__
#define __IABSTRACTFACTORY_H__

#include <list>

class IButton;
class IWindow;

class IFactory
{
public:
	virtual ~IFactory() = 0
	{
		m_buttons.remove_if(deleteAllButtons);
		m_windows.remove_if(deleteAllWindows);
	};

	virtual IButton* CreateButton() = 0;
	virtual IWindow* CreateWindow() = 0;

protected:
	std::list<IButton*> m_buttons;
	std::list<IWindow*> m_windows;

private:
	static bool deleteAllButtons(IButton* _btn) { delete _btn; return true; }
	static bool deleteAllWindows(IWindow* _win) { delete _win; return true; }
};

#endif