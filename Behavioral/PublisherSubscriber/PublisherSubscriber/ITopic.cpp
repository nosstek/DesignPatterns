#include "StdAfx.h"
#include <algorithm>
#include "ITopic.h"
#include "Subscriber.h"
#include "Message.h"

void ITopic::AddSubscriber(Subscriber &_sub)
{
	m_subscribers.push_back(&_sub);
	printf("\tAdded subscriber %s to topic %s\n", _sub.GetId().c_str(), GetId().c_str());
}

void ITopic::RemoveSubscriber(Subscriber &_sub)
{
		std::list<Subscriber*>::iterator it = std::find(m_subscribers.begin(), m_subscribers.end(), &_sub);
		if (it != m_subscribers.end())
		{
			m_subscribers.erase(it);
			printf("Removed subscriber %s from topic %s\n", _sub.GetId().c_str(), GetId().c_str());
		}
}

void ITopic::SendMessageToSubscribers(Message &_msg)
{
	printf("\tSending message %i to all subscribers\n", _msg.GetId());
	for (std::list<Subscriber*>::iterator it = m_subscribers.begin(); it != m_subscribers.end(); ++it)
		(*it)->ReceiveMessage(_msg);
}