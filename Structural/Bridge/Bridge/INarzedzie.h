#ifndef __INARZEDZIE_H__
#define __INARZEDZIE_H__

#include "IKoncowka.h"

class INarzedzie
{
public:
	INarzedzie(const std::string &_id, IKoncowka* _impl, bool echo = true) : m_id(_id), m_impl(_impl) { if (echo) printf("Creating INarzedzie with %s\n", _impl ? _impl->GetId().c_str() : ""); };
	virtual ~INarzedzie() {};

	void Function()
	{
		printf("Using Function\n\t\t");
		if (m_impl != NULL)
			m_impl->Implementation();
	}

	void SetImplementor(IKoncowka* _impl)
	{
		if (_impl)
		{
			printf("Changing IKoncowka in %s to: %s\n", GetId().c_str(), _impl->GetId().c_str());
			m_impl = _impl;
		}
	}

	std::string GetId() const { return m_id; };

private:
	IKoncowka* m_impl;
	std::string m_id;
};

#endif