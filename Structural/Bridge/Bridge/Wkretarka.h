#ifndef __WKRETARKA_H__
#define __WKRETARKA_H__

#include "INarzedzie.h"

class Wkretarka :
	public INarzedzie
{
public:
	Wkretarka(IKoncowka* _impl) : INarzedzie("Wkretarka", _impl, false) { printf("Creating Wkretarka with %s\n", _impl ? _impl->GetId().c_str() : ""); };

	void UruchomWkretarke()
	{
		printf("Using UruchomWkretarke\n\t");
		__super::Function();
	};
};

#endif