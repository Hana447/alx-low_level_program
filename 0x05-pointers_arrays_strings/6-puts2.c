#include "main.h"
#include <string.h>
/**
  * puts2 -  This function print every other character
  * @str: param
  */
void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
