#ifndef __ISTATE_H__
#define __ISTATE_H__

#include <string>

class IState
{
public:
	IState(const std::string &_id) : m_id(_id) {};
	virtual ~IState(void) {};

	virtual bool Use() = 0;

	std::string GetId() const { return m_id; };

private:
	const std::string m_id;
};

#endif