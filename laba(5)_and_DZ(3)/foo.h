#include <iostream>
#include <time.h>

using namespace std;

void radota() 
{
	int* a = new int(0);
	int* d = new int(0);

	cout << " Ether a-> ";
	cin >> *a;
	cout << " Ether d-> ";
	cin >> *d;
	if (*d>*a)
	{
		swap(*a, *d);
	}
	cout << "Bolche - " << *a;
}
