#include "StdAfx.h"
#include "Invoker.h"

#include "ICommand.h"

Invoker::Invoker(const std::string &_id) : m_id(_id)
{
	/*printf("%s\n", "Invoker constructor");*/
}

void Invoker::ExecuteCommand(ICommand* _cmd)
{
	if (_cmd != NULL)
	{
		_cmd->Execute();
		printf("Added cmd %s to History\n", _cmd->GetId().c_str());
		m_history.push_back(_cmd);
	}
}