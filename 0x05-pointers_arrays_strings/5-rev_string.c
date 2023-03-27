#include "main.h"
#include <string.h>
/**
  * rev_string - This function retirn revers string
  * @s: pram
  */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
