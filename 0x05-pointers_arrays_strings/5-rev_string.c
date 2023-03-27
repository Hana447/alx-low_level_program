#include "main.h"
#include <string.h>
/**
  * rev_string - This function retirn revers string
  * @s: pram
  */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
			putchar(s[i]);
	putchar('\n');
}
