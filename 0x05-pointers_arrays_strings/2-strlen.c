#include "main.h"

/**
 * _strlen - give the length of a string
 * @s: receives the string
 *
 * Return: the length of th string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}
