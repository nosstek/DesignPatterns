#include "StdAfx.h"
#include "Receiver.h"

Receiver::Receiver(const std::string &_id) : m_id(_id)
{
	/*printf("%s\n", "Receiver constructor");*/
}

void Receiver::TurnOff()
{
	printf("%s turned off\n", GetId().c_str());
}

std::string Receiver::GetId() const
{
	return m_id;
}

void Receiver::TurnOn()
{
	printf("%s turned on\n", GetId().c_str());
}