#include <iostream>
#include "input.h"
#include "check.h"
#include "handler.h"
#include "output.h"


int main()
{
	int* randArray = initArray();
	int key;
	showArray(randArray, 20);
	sortArray(randArray, 20);
	showSortedArray(randArray, 20);
	try
	{
		key = GetKey();
		throwError(isValidKey(key));
	}
	catch (int exeption)
	{
		if (exeption == -1)
		{
			std::cout << "\x1b[31mError: \x1b[0m" << exeption << "\n\x1b[31mNot a number entered\x1b[0m\n";
			delete[] randArray;
			return -1;
		}
		if (exeption == -2)
		{
			std::cout << "\x1b[31mError: \x1b[0m" << exeption << "\n\x1b[31mNot valid number entered\x1b[0m\n";
			delete[] randArray;
			return -1;
		}
	}

	showKeys(searchKey(randArray, 20, key));
	delete[] randArray;
}