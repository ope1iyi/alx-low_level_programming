#include "main.h"
#include <ctype.h>

/**
 * _islower - Code entry point
 * Description: checks for lowercase character
 * @c: the integer it receives
 * Return: 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
