#ifndef __MESSAGE_H__
#define __MESSAGE_H__

class Message
{
public:
	Message(const std::string &_message) : m_message(_message), m_id(s_iterator)
	{
		printf("Created message %i: %s\n", m_id, GetMessage().c_str());
		++s_iterator;
	};

	std::string GetMessage() const { return m_message; };
	int GetId() const { return m_id; };

private:
	static int s_iterator;
	int m_id;
	std::string m_message;
};

#endif