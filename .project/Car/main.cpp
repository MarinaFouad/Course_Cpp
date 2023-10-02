#include <iostream>
#include <string>
#include "car.h"
using namespace std; 

int main()
{
	car car1;
	car1.setcolor("yellow");
	car1.setyear(1999);
	car1.setmaker("marc");
	car1.getcolor();
	car1.getmaker();
	car1.getyear();

}