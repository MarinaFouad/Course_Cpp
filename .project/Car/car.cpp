#include "car.h"

void car::setmaker(string m)
{
	maker = m;
}

void car::setyear(int y)
{
	year = y;
}

void car::setcolor(string c)
{
	color = c;
}

void car::getmaker()
{
	cout << maker << "\n";
}

void car::getyear()
{
	cout << year << "\n";
}

void car::getcolor()
{
	cout << color << "\n";
}
