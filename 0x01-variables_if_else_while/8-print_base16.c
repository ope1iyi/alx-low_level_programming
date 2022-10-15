#include <stdio.h>
/**
 * main - prints a ll numbers of base 16
 * 48 -57  -> 0 -9 ; 97 - 102 -> a-f
 * Return: 0
 */
int main(void)
{
int num;
int letter;
for (num = 48; num <= 57; num++)
{
putchar(num);
}
for (letter = 97; letter <= 102; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
