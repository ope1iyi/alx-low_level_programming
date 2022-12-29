#include "main.h"

/**
 * *_strncat - concatenates string to a number of bytes
 * @dest: destination string
 * @src: source string
 * @n: bytes from src
 * Return: string resulted
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
