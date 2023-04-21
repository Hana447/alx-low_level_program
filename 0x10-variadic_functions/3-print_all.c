#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *
  *
  */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;
	int num;
	double dbl;
	char c;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				c = (char) va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(list, int);
				printf("%d", num);
				break;
			case 'f':
				dbl = va_arg(list, double);
				printf("%f", dbl);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				continue;
		}
if (format[i])
{
while (format[i] != 'c' && 
		format[i] != 'i' && format[i] != 'f' && 
		format[i] != 's' && format[i])
		i++;
}
		printf(", ");
	}

va_end(list);
printf("\n");
}
