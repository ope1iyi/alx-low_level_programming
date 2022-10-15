#include <stdio.h>
/**
 * main - prints alphabets in lower then in uppercase
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
char upper = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
