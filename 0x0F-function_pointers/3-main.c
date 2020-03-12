#include "3-calc.h"

/**
 * main - Entry point
 * @argc: int variable
 * @argv: char array pointer
 * Return: No 0
 */
int main(int argc, char *argv[])
{
	int number1 = 0;
	int number2 = 0;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	result = get_op_func(argv[2])(number1, number2);
	printf("%d\n", result);
	return (0);
}
