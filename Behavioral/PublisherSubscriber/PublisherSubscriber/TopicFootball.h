#ifndef __TOPICFOOTBALL_H__
#define __TOPICFOOTBALL_H__

#include "ITopic.h"

class TopicFootball :
	public ITopic
{
public:
	TopicFootball(const std::string &_id = "Football") : ITopic(_id) {};
};

#endif