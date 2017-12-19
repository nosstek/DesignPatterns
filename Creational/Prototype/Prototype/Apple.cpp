#include "StdAfx.h"
#include "Apple.h"

Apple::Apple(void)
{
}

Apple::~Apple(void)
{
}

IFruit* Apple::Clone() const
{
	return new Apple(*this);
}