#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: receives interger input
 * Return: 1
 */
int _isupper(int c)
{
	int upper = 65;

	while (upper <= 90)
	{
		if (c == upper)
			return (1);
		else
			return (0);
		upper++;
	}
}
