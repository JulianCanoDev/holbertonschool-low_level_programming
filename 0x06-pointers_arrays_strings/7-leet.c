#include "holberton.h"

/**
 * leet - Entry point
 * @n: char pointer
 * Return: Always 0 (Success).
 */
char *leet(char *n)
{
	int i = 0;
	int j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; letters[j] != '\0' ; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = numbers[j];
			}
		}
	}
return (n);
}
