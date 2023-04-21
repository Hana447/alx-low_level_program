#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - this is function
  * @n: param
  * @separator: param2
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	const char *string;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, const char*);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}

