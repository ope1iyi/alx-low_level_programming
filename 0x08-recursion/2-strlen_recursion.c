#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: length value
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = _strlen_recursion(s + 1);
		count ++;
	}
	return (count);
}
