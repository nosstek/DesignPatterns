#ifndef __BANANA_H__
#define __BANANA_H__

#include "IFruit.h"

class Banana: public IFruit
{
public:
	Banana(void);
	virtual ~Banana(void);
	IFruit* Clone() const;
};

#endif