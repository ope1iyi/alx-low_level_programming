#include <stdio.h>
/**
 * main - print three different combination of
 *
 * Return: 0
 */
int main(void)
{
int p1, p2, p3;
for (p1 = 48; p1 <= 57; p1++)
{
for (p2 = 49; p2 <= 57; p2++)
{
for (p3 = 50; p3 <= 57; p3++)
{
putchar(p1);
putchar(p2);
putchar(p3);
if (p1 == 7 && p2 == 8 && p3 == 9)
continue;
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
