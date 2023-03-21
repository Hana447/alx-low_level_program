#include<stdio.h>
/**
  * main - this program print a - z 10*
  * Return: return 0
  * print_alphabet_x10 - this will return the alphabet
  * print_alphabet_x10: This will return alphabet
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
int main(void)
{
	print_alphabet_x10();
	return (0);
}
