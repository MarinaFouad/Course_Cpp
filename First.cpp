#include <iostream>
#include <string>
using namespace std;

struct employee {
	int eno;
	string ename;
	string ejob;
	double esalary;
	double ebonus;
};
void hr(employee employees[], int size);
void print(employee employees[], int size);
int main()
{
	employee employees[2];
	 hr(employees,2);
	 print(employees,2);
	return 0;
}

void print(employee employees[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Employee number = \n " << employees[i].eno << "\n";
		cout << "Employee name = \n " << employees[i].ename << "\n";
		cout << "Employee job = \n " << employees[i].ejob << "\n";
		cout << "Employee salary = \n " << employees[i].esalary << "\n";
	}

}

void hr(employee employees[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number , name , job " ;
		cin >> employees[i].eno >> employees[i].ename >> employees[i].ejob ;
		if (employees[i].ejob == "manager")
		{
			employees[i].esalary = 5000;
		}
		else if (employees[i].ejob == "Engineer")
		{
			employees[i].esalary = 3000;
		}
		else if (employees[i].ejob == "clerk")
		{
			employees[i].esalary = 2000;
		}
		else
		{
			employees[i].esalary = 1000;
		}
	}

}

