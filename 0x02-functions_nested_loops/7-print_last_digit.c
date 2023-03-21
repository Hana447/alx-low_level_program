#include "main.h"

/**
  * print_last_digit - this function return last digit
  * @n: par
  * Return: return 0
  */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
