#include <iostream>
#include "output.h"

int showKey(int key)
{
	if (key >= 0) std::cout << "index of the key in this array is: ";
	else
	{
		std::cout << "there is not that key in the array.\n";
		return 0;
	}

	
		std::cout << key << " ";
	

}