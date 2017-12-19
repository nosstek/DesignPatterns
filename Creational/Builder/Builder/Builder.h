#ifndef __BUILDER_H__
#define __BUILDER_H__

#include "Product.h"

class Builder
{
public:

	Builder() : m_Price(123), m_Weight(3.1415f), m_Symbol('a') {}

	void SetPrice(const int price) { m_Price = price; }
	void SetWeight(const float weight){ m_Weight = weight; }
	void SetSymbol(const char symbol){ m_Symbol = symbol; }

	Product build()
	{
		return Product(m_Price, m_Weight, m_Symbol);
	}

private:
	int m_Price;
	float m_Weight;
	char m_Symbol;
};

#endif