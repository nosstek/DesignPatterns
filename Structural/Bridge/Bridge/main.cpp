#include "stdafx.h"
#include <vld.h>
#include "Wiertarka.h"
#include "Wkretarka.h"
#include "Krzyzak.h"
#include "Wiertlo.h"

int main()
{
	printf("\n");
	Wiertlo first_implementation;
	Wkretarka other_obstraction = Wkretarka(&first_implementation);

	Wiertarka some_abstraction = Wiertarka(&first_implementation);

	printf("\n");
	other_obstraction.UruchomWkretarke();

	printf("\n");
	Krzyzak second_implementation;

	some_abstraction.SetImplementor(&second_implementation);

	some_abstraction.UruchomWiertarke();

	printf("\n");
	system("pause");
	return 0;
}