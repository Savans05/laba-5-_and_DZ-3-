#include <iostream>
#include <time.h>
#include "windows.h"

using namespace std;

void radota()
{
	int* a = new int(0);
	int* d = new int(0);

	cout << " Ether a-> ";
	cin >> *a;
	cout << " Ether d-> ";
	cin >> *d;
	system("cls");
	cout << "\ta = " << *a << ", d = " << *d;
	swap(*a, *d);
	cout << "\n\ta = " << *a << ", d = " << *d;
}
