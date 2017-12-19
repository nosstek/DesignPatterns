#ifndef __WIERTLO_H__
#define __WIERTLO_H__

#include "IKoncowka.h"

class Wiertlo :
	public IKoncowka
{
public:

	Wiertlo(const std::string &_id = "Wiertlo") : IKoncowka(_id) {};

	void Implementation() override { printf("Wiercisz uzywajac %s\n", GetId().c_str()); };
};

#endif