#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
public:
	Product( const int price, const float weight, const char symbol)
		: m_Price(price), m_Weight(weight), m_Symbol(symbol) {}

	void Show() {};
private:
	int m_Price;
	float m_Weight;
	char m_Symbol;
};

#endif