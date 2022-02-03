#include "handler.h"

int searchKey(int* array, int size, int key)
{
	int keyIndex = -1;
	int leftPointer = 0;
	int rightPointer = size - 1;
	int mid;

	while (leftPointer <= rightPointer)
	{
		mid = (leftPointer + rightPointer) / 2;
		if (array[mid] == key) {
			keyIndex = mid;
			break;
		};
		if (array[mid] > key) rightPointer = mid - 1;
		else leftPointer = mid + 1;
	}
	return keyIndex;
}