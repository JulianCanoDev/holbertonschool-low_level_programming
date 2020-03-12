#include "3-calc.h"

/**
 * op_add - add a and b number
 * @a: int variable
 * @b: int variable
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract a and b number
 * @a: int variable
 * @b: int variable
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate a and b number
 * @a: int variable
 * @b: int variable
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a and b number
 * @a: int variable
 * @b: int variable
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - module a and b number
 * @a: int variable
 * @b: int variable
 * Return: Result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
