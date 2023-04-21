#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - this ia a function
  * @n: param1
  * Return: return
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list lists;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(lists, n);
	for (i = 0; i < n; i++)
		sum += va_arg(lists, int);
	va_end(lists);
	return (sum);
}

