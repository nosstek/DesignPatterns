#ifndef __IKONCOWKA_H__
#define __IKONCOWKA_H__

class IKoncowka
{
public:
	IKoncowka(const std::string &_id) : m_id(_id) {};
	virtual ~IKoncowka() {};

	virtual void Implementation() = 0;

	std::string GetId() { return m_id; };

private:
	std::string m_id;
};

#endif