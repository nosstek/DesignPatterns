#include "StdAfx.h"
#include "Subscriber.h"
#include "ITopic.h"
#include "Message.h"

void Subscriber::ReceiveMessage(Message &_msg)
{
	printf("\t\t%s received new message: %s\n", GetId().c_str(), _msg.GetMessage().c_str());
}

void Subscriber::SubscribeTopic(ITopic* _topic)
{
	if (_topic != NULL)
	{
		printf("%s\n", "Subscribing to topic");
		_topic->AddSubscriber(*this);
	}
}

void Subscriber::CancelSubscribtion(ITopic* _topic)
{
		if (_topic != NULL)
	{
		printf("%s\n", "Subscribing tp topic");
		_topic->RemoveSubscriber(*this);
	}
}