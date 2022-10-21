#include "main.h"

/**
 * _isdigit - checks for digit 0 - 9
 * @c: receives interger input
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int start;

	for (start = 48; start <= 57; start++)
	{
		if (c == start)
		{
			return (1);
		}
		else
			return (0);
	}
}
