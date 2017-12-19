#include "StdAfx.h"
#include "Banana.h"

Banana::Banana(void)
{
}

Banana::~Banana(void)
{
}

IFruit* Banana::Clone() const
{
	return new Banana(*this);
}