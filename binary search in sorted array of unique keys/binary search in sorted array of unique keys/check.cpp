#include "check.h";

bool isValidKey(int key)
{
	if (key < 0 || key > 100) return false;
	return true;
}

void throwError(bool isValidKey)
{
	if (!isValidKey) throw - 2;
}