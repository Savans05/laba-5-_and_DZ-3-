#include <iostream>
#include <time.h>

using namespace std;

int* Init(int size)
{
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 3;
	}
	return mas;
}

void radota()
{
	srand(time(0));
	int size = 10;
	int* mas = Init(size);
	int* mascopy = new int[size];
	for (int i = size-1,j = 0; i >= 0; i--,j++)
	{
		*(mascopy + j) = *(mas + i);
	}
	for (int i = 0; i < size; i++)
	{
		cout << " " << mas[i];
	}
	cout << "\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << " " << mascopy[i];
	}
}

