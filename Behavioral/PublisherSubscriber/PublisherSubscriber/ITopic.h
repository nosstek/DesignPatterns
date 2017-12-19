#ifndef __ITOPIC_H__
#define __ITOPIC_H__

#include <list>

class Subscriber;
class Message;

class ITopic
{
public:

	ITopic(const std::string &_id) : m_id(_id) { printf("Creating topic %s\n", m_id.c_str()); };
	virtual ~ITopic() {};

	void AddSubscriber(Subscriber &_sub);
	void RemoveSubscriber(Subscriber &_sub);

	void SendMessageToSubscribers(Message &_msg);

	std::string GetId() const { return m_id; };
private:
	std::string m_id;
	std::list<Subscriber*> m_subscribers;
};

#endif