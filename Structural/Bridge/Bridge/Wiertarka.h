#ifndef __WIERTARKA_H__
#define __WIERTARKA_H__

#include "INarzedzie.h"

class Wiertarka :
	public INarzedzie
{
public:
	Wiertarka(IKoncowka* _impl) : INarzedzie("Wiertarka", _impl, false) { printf("Creating Wiertarka with %s\n", _impl ? _impl->GetId().c_str() : ""); };

	void UruchomWiertarke()
	{
		printf("Using UruchomWiertarke\n\t");
		__super::Function();
	};
};

#endif