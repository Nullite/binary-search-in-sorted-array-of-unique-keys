#include <vector>
#include "handler.h"

std::vector<int> searchKey(int* array, int size, int key)
{
	std::vector<int> keys;
	int leftPointer = 0;
	int rightPointer = size - 1;
	int mid;

	while (leftPointer <= rightPointer)
	{
		mid = (leftPointer + rightPointer) / 2;
		if (array[mid] == key) {
			keys.push_back(mid);
		};
		if (array[mid] > key) rightPointer = mid - 1;
		else leftPointer = mid + 1;
	}
	return keys;
}