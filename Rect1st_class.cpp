#include <iostream>
using namespace std;

class Rect {
private :
	float width;
	float length;
public :
	void set_wid()
	{
		int wid;
		cout << "ُEnter the width";
		cin >> wid;
		if (wid <= 0)
		{
			cout << "Invalid width";
		}
		else width = wid;
	}
	void set_len()
	{
		int len;
		cout << "ُEnter the length";
		cin >> len;
		if (len <= 0)
		{
			cout << "Invalid length";
		}
		else length = len;
	}
	float get_wid() {
		cout << "The width = " << width;
	}
	float get_len() {
		cout << "The length = " << length;
	}
	void area()
	{
		cout << "The area = " << length * width  ;
	}
};

int main()
{
	Rect box;
	box.set_len();
	box.set_wid();
	box.area();
}
