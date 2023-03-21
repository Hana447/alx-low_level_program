#include "main.h"
/**
* print_last_digit - prints the last digit
* Return: return 0
* @n: parametr
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
