#include <stdio.h>
/**
 * main - prints all possible combination
 * of a single-digit number separated by comma,
 * sample: 0, 1, 2, 3, 4, 5,6 ,7 ,8, 9
 * Return: 0
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
