#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hex_num = 0;
int hex_let = 0;

for (hex_num = 48 ; hex_num <= 57 ; hex_num++)
{
	putchar(hex_num);
}
for (hex_let = 97 ; hex_let <= 102 ; hex_let++)
{
	putchar(hex_let);
}
putchar('\n');
return (0);
}
