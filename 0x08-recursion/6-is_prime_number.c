#include "main.h"
/**
  * is_prime_number - This function return 1 if the number is prime
  * @n: param1
  * Return: return 0
  */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
  * is_prime - This function help
  * @n: param1
  * @m: param2
  * Return:return0
  */
int is_prime(int n, int m)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % m == 0)
		return (0);
	if (m * m > n)
		return (1);
	return (is_prime(n, m + 1));
}
