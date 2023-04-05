#include "main.h"
/**
  * factorial - This function returns the factorial of n number
  * @n:param1
  * Return: int
  */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
