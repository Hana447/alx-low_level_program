#include "main.h"
/**
  * _puts - This function return the string
  * @str: pointer param
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
