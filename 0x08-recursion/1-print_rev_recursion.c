#include "main.h"
/**
  * _print_rev_recursion -This function prrints the reverse
  * @s: param1
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

