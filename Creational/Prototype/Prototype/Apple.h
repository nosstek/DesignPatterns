#ifndef __APPLE_H__
#define __APPLE_H__

#include "IFruit.h"

class Apple: public IFruit
{
public:
	Apple(void);
	virtual ~Apple(void);
	IFruit* Clone() const;
};

#endif