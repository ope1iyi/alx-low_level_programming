#include <stdio.h>
/**
 * main -print possible combination of two digits
 * decrp: print from 00 to 99
 * Return: 0
 */
int main(void)
{
int num1, num2;
for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 49; num2 <= 57; num2++)
{
putchar(num1);
putchar(num2);
if (num1 == 57 && num2 == 57)
continue;
putchar(44);
putchar(32);

}
}
putchar('\n');
return (0);
}
