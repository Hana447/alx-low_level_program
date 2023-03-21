#include "main.h"

/**
  * print_alphabet_x10 - this will return the alphabet
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		count++;
	}
}
