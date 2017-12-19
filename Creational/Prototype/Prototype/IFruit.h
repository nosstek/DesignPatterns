#ifndef __IFRUIT_H__
#define __IFRUIT_H__

class IFruit
{
public:
	virtual ~IFruit() = 0 {};

	virtual IFruit* Clone() const = 0;
};

#endif