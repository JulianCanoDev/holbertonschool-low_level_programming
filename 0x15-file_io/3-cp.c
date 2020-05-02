#include "holberton.h"
/**
 * main - main file
 * @argc: arguments
 * @argv: vector
 * Return: copied file
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97));
	filefrom = open(argv[1], O_RDONLY);
	if (file)
}
