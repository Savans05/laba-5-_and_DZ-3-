#include <iostream>
#include <time.h>

using namespace std;

void radota()
{
	int* a = new int;
	int* b = new int;
	int* c = new int;
	for (int i = 0; true; i++)
	{
		cout << " Ether a-> ";
		cin >> *a;
		cout << " Ether b-> ";
		cin >> *b;
		cout << "Arifmet ->";
		cout << "\n\t+ - 1\n\t- - 2\n\t* - 3\n\t/ - 4\n";
		cin >> *c;
		switch (*c)
		{
		case 1: 
		{
			cout << "\n\t" << *a << " + " << *b << " = " << *a+*b;
			break;
		}
		case 2:
		{
			cout << "\n\t" << *a << " - " << *b << " = " << *a - *b;
			break;
		}
		case 3:
		{
			cout << "\n\t" << *a << " * " << *b << " = " << *a * *b;
			break;
		}
		case 4:
		{
			cout << "\n\t" << *a << " / " << *b << " = " << *a / *b;
			break;
		}
		default: {
			cout << "\n\n\n\tError\n\n\n";
			system("pause");
			system("cls");
			continue;
			break;
		}
		}
		system("cls");
		int* y = new int;
		cout << "\n\n\nProdol?\n\t1 - yes\n\tno - 2\n\t";
		cin >> *y;
		if (*y!=1)
		{
			break;
		}
		system("cls");
	}
}
