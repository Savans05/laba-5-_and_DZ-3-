#include <iostream>
#include <time.h>

using namespace std;

void radota()
{
	int* a = new int;
	int* b = new int;
	int* g = new int;
	int* c = new int;
	char* j = new char;
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
			*g = *a+*b ;
			*j = '+';
			break;
		}
		case 2:
		{
			*g = *a - *b;
			*j = '-';
			break;
		}
		case 3:
		{
			*g = *a * *b;
			*j = '*';
			break;
		}
		case 4:
		{
			*g = *a / *b;
			*j = '/';
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
		cout << "\n\t" << *a << " " << *j << " " << *b << " = " << *g;
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
