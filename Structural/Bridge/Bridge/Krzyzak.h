#ifndef __KRZYZAK_H__
#define __KRZYZAK_H__

#include "IKoncowka.h"

class Krzyzak :
	public IKoncowka
{
public:
	Krzyzak(const std::string &_id = "Krzyzak") : IKoncowka(_id) {};

	void Implementation() override { printf("Wkrecasz uzywajac %s\n", GetId().c_str()); };
};

#endif