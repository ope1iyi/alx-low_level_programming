#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets
 * in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char start;

		for (start = 'a'; start <= 'z'; start++)
			_putchar(start);
	}
	_putchar('\n');
}
