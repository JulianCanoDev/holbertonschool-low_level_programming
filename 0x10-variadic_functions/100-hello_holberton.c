#include <unistd.h>

#define STDOUT 1

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	write(1, "Hello, Holberton\n", 13);
}
