#include "main.h"
#include <string.h>
/**
  * print_rev - This function return string in reverse way
  * @s: par
  */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
