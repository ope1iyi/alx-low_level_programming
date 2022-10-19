#include "main.h"
/**
 * times_table - prints the multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, ones, tens, mul;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			mul = i * j;
			ones = mul / 10;
			tens = mul % 10;

			_putchar(',');
			_putchar(' ');

			if (mul < 10)
			{
				_putchar(' ');
				_putchar(tens + '0');

			}
			else
			{
				_putchar(ones + '0');
				_putchar(tens + '0');
			}


		}
		_putchar('\n');
	}

}
