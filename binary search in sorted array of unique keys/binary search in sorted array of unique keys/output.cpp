#include <iostream>
#include <vector>
#include "output.h"

int showKeys(std::vector<int> keys)
{
	if (keys.size() == 1) std::cout << "index of the key in this array is: ";
	else if (keys.size() > 1) std::cout << "indexes of the key in this array are: ";
	else
	{
		std::cout << "there is not that key in the array.\n";
		return 0;
	}

	for (int i = 0; i < keys.size(); i++)
	{
		std::cout << keys[i] << " ";
	}

}