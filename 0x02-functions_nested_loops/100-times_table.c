#include "main.h"

/**
 * print_times_table - print times table less than 15
 * @n: reveives interger input
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int i, j, mul, ones, tens;
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				ones = mul / 10;
				tens = mul % 10;
				_putchar(',');
				_putchar(' ');
				if (mul > 99)
				{
					_putchar(ones + '0');
					_putchar(ones % 10 + '0');				
				}

					
			}
			_putchar('\n');
		}
	
	}

}
