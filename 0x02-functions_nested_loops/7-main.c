#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(99800982);
    print_last_digit(-10000);
    r = print_last_digit(-10278774);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
