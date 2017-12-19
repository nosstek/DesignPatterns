#include "stdafx.h"
#include <vld.h>
#include "TopicDinner.h"
#include "TopicFootball.h"
#include "Subscriber.h"
#include "Publisher.h"
#include "Message.h"

int Message::s_iterator = 0;

int main()
{
	printf("\n");
	TopicDinner dinner;
	TopicFootball football;

	printf("\n");
	Subscriber s1 = Subscriber("s1");
	dinner.AddSubscriber(s1);
	Subscriber s2 = Subscriber("s2");
	dinner.AddSubscriber(s2);
	football.AddSubscriber(s2);
	Subscriber s3 = Subscriber("s3");
	football.AddSubscriber(s3);
	Subscriber s4 = Subscriber("s4");
	football.AddSubscriber(s4);

	printf("\n");
	Publisher p1 = Publisher("p1");
	Publisher p2 = Publisher("p2");

	printf("\n");
	Message m1 = Message("Cokolwiek");
	Message m2 = Message("Lubie Placki");
	Message m3 = Message("Pilka");

	printf("\n");
	p1.SendMessage(&dinner, m1);

	printf("\n");
	dinner.RemoveSubscriber(s1);
	printf("\n");
	p1.SendMessage(&dinner, m2);

	printf("\n");
	p2.SendMessage(&football, m3);

	printf("\n");
	system("pause");
	return 0;
}