#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

class ICommand
{
public:
	ICommand(const std::string &_id) : m_id(_id) {};
	virtual ~ICommand() {};

	void virtual Execute() = 0;

	std::string GetId() const { return m_id; };

private:
	const std::string m_id;
};

#endif