#include "main.h"

/**
 * print_alphabet - starting point
 *  print lowercase alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
