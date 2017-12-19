#ifndef __PUBLISHER_H__
#define __PUBLISHER_H__

#include "Message.h"

class ITopic;

class Publisher
{
public:
	Publisher(const std::string &_id) : m_id(_id) { printf("Creating Publisher %s\n", m_id.c_str()); };

	void SendMessage(ITopic* _topic, Message &_msg)
	{
		if (_topic != NULL)
		{
			printf("%s posting message %i to topic %s\n", GetId().c_str(), _msg.GetId(), _topic->GetId().c_str());
			_topic->SendMessageToSubscribers(_msg);
		}
	};

	std::string GetId() const { return m_id; };
private:
	std::string m_id;
};

#endif