#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
float b;
long int c;
long long int d;
char f;

printf("Size of char: %lu byte(s)\n", sizeof(f));
printf("Size of int: %lu byte(s)\n", sizeof(a));
printf("Size of long int: %lu byte(s)\n", sizeof(c));
printf("Size of long long int: %lu byte(s)\n", sizeof(d));
printf("Size of float: %lu byte(s)\n", sizeof(b));
return(0);
}
