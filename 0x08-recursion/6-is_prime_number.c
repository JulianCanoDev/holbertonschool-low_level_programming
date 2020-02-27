/**
 * is_prime_number - Entry point
 * @p: int variable
 * @i: int variable
 * Return: Always 0 (Success).
 */
int verifica(int p, int i);


int is_prime_number(int n)
{
	int i;

	if (n == 1)
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	else
	{
		i = verifica(n, 2);
		return (i);
	}
}
/**
* verifica - Entry point
* @p: int variable
* @i: int variable
* Return: Always 0 (Success).
 **/
int verifica(int p, int i)
{
	if (p % i == 0 && i < p)
	{
		return (0);
	}
	else if (i == p)
	{
		return (1);
	}
	else
	{
		return (verifica(p, i + 1));
	}
}
