#include "main.h"
/**
* print_last_digit - prints the last digit
* Return: return 0
* @n: parametr
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(x + '0');
	return (x);
}
