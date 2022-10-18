#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 *
 * Return: 0
 */
int _isalpha(int c)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		char u;

		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				return (1);
		}
	}
}
