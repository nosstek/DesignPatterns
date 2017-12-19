#ifndef __INVOKER_H__
#define __INVOKER_H__

#include <list>

class ICommand;

class Invoker
{
public:
	Invoker(const std::string &_id);

	void ExecuteCommand(ICommand* _cmd);
	std::string GetId() const;

private:
	const std::string m_id;
	std::list<ICommand*> m_history;
};

#endif