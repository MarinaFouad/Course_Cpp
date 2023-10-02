#pragma once
#include <iostream>
#include <string>
using namespace std;
class car
{
private : 
	string maker;
	int year;
	string color;
public :
	void setmaker(string m);
	void setyear(int y);
	void setcolor(string c);
	void getmaker();
	void getyear();
	void getcolor();
};

