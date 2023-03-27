#include "main.h"
#include <string.h>
/**
  * rev_string - This function return string in reverse way
  * @s:pointer param
  */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
