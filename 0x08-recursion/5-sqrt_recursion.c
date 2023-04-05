#include "main.h"
/**
  * _sqrt_recursion - This function return the natural number of a given sqare
  * @n:param
  * Return: return 0
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}

/**
  * _sqrt - this
  * @n: param1
  * @m: param2
  * Return: return 0
  */
int _sqrt(int n, int m)
{
	int m2 = m * m;

	if (m2 == n)
		return (m);
	else if (m2 < n)
	{
		if (m + 1 * m + 1 == n)
			return (m + 1);
		else if (m + 1 * m + 1 < n)
			return (_sqrt(n, m + 1));
	}
	else if (m2 > n)
	{
		if (m - 1 * m - 1 == n)
			return (m - 1);
		else if (m - 1 * m - 1 > n)
			return (_sqrt(n, m - 1));
	}
	return (-1);
}
