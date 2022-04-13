#include <iostream>
#include <time.h>

using namespace std;
int* Init(int size)
{
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 3;
		cout << " " << mas[i];
	}
	return mas;
}

void radota()
{
	srand(time(0));
	int size = 10;
	int* mas = Init(size);
	int* ch = new int(0);
	for (int i = 0; i < size; i++)
	{
		*ch += *(mas + i);
	}
	cout << "\n\n\nSum ch mas = " << *ch;
}
