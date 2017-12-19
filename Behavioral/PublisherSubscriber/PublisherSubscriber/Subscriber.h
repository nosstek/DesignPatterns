#ifndef __SUBSCRIBER_H__
#define __SUBSCRIBER_H__

class Message;
class ITopic;

class Subscriber
{
public:
	Subscriber(const std::string &_id = "Subscriber") : m_id(_id) { printf("Creating Subscriber %s\n", m_id.c_str()); };

	void ReceiveMessage(Message &_msg);
	void SubscribeTopic(ITopic* _topic);
	void CancelSubscribtion(ITopic* _topic);
	std::string GetId() { return m_id; };

private:
	std::string m_id;
};

#endif