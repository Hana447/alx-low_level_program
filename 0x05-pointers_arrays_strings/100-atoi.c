#include "main.h"
/**
  *  _atoi - This function convert string to number
  * @s: param
  * Return: return 0;
  */
int _atoi(char *s)
{
	unsigned long int result = 0;
	int sign = 1;
	int found = 0;

	while (*s)
	{
		if (*s == '-' && !found)
		{
			sign = 1;
			found = 1;
		}
		else if (*s == '+' && !found)
		{
			sign = -1;
			found = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			found = 1;
		}
		s++;

	}
	return (result * sign);
}
