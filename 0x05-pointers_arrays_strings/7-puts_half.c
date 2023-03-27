#include "main.h"
#include <string.h>
/**
  * puts_half - This function return the last half numbers
  * @str: param
  */
void puts_half(char *str)
{
	int len = strlen(str);
	int n,i;

	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = n; i <= len;i++)
		putchar(str[i]);
}

