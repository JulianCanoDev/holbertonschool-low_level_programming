#include "holberton.h"

/**
 * rot13 - Entry point
 * @n: char pointer
 * Return: Always 0 (Success).
 */
char *rot13(char *n)
{
	int i = 0;
	int j = 0;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; letters[j] != '\0' ; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = rot13[j];
				break;
			}
		}
	}
return (n);
}
