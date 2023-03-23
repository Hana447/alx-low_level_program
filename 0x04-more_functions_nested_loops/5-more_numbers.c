#include "main.h"
/**
  * more_numbers - this functio print 0-14 10x
  */
void more_numbers(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 30; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');

			}
			_putchar(j % 10 + '0');

		}
		_putchar('\n');
	}
}
