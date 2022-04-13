#include <iostream>
#include <time.h>

using namespace std;

void radota()
{
	int* a = new int(0);
	

	cout << " Ether a-> ";
	cin >> *a;
	
	if (*a>0)
	{
		cout << "Znak-> +";
	}
	else if (*a == 0) 
	{
		cout << "0";
	}
	else
	{
		cout << "Znak-> -";
	}
	
}

