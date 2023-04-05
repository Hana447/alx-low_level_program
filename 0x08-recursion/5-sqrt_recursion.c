#include "main.h"
/**
  * _sqrt_recursion - This function return the natural number of a given sqare
  * @n:param
  * Return: return 0
  */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0, n));
}

/**
  * _sqrt_helper - this
  * @n: param1
  * @low: param2
  * @high: param3
  * Return: return 0
  */
int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
		return (-1);
	else if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_helper(n, low, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, high));
}
