#include "main.h"
/**
  * main - This will print the alphabet
  * Return: return 0
  */
void  print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
