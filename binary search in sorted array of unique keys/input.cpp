#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "input.h"

int* initArray()
{
	srand(time(nullptr));
	const int size = 20;
	int* randArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (!i)
		{
			randArray[i] = rand() % 100;
			continue;
		}

		int number = rand() % 100;
		for (int j = 0; j < i; j++)
		{
			if (randArray[j] == number)
			{
				i--;
				break;
			}
			else randArray[i] = number;
		}
	}
	return randArray;
}

void showArray(int* array, int size)
{
	std::cout << "Random generated array of unique keys is: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n\n";
}

void sortArray(int* array, int size)
{
	std::sort(array, array + size);
}

void showSortedArray(int* array, int size)
{
	std::cout << "Programm must sort this array for binary search\n";
	std::cout << "\nSorted Array: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}

int GetKey()
{
	int key;
	std::cout << "Enter a key for binary search in random generated sorted array (key must be from 0 to 100)\n";
	std::cin >> key;
	if (!std::cin >> key) throw - 1;
	return key;
}