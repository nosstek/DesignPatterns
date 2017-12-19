#ifndef __TOPICDINNER_H__
#define __TOPICDINNER_H__

#include "ITopic.h"

class TopicDinner :
	public ITopic
{
public:
	TopicDinner(const std::string &_id = "Dinner") : ITopic(_id) {};
};

#endif