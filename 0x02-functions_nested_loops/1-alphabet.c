#include "main.c"

/**
 * main - a function that prints alphabets in lowercase
 *
 * Return: 0
 */

int print_alphabet(void)
{
	char start = 'a';
	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
	return (0);
}
