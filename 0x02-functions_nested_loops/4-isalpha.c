#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: receives interger number
 *
 * Return: 0
 */
int _isalpha(int c)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				return (1);
		}
	}
	return (0);
}
