#include "main.h"

/**
 * _abs - prints absolute value
 * @num: this is the positive or negative number
 *
 * Return: 0
 */
int _abs(int num)
{
	int result;

	if (num < 0)
	{
		result = num * -1;
		return (result);
	}
	result = num;
	return (result);
}
