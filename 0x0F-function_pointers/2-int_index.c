#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: int array pointer
 * @size: int variable
 * @cmp: callback
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int recibido = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		recibido = cmp(array[i]);
		if (recibido != 0)
		{
			return (i);
		}
	}
	return (-1);
}
