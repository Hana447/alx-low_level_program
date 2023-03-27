#include "main.h"
/**
  *  _atoi - This function convert string to number
  * @s: param
  * Return: return 0;
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	
	if (*s == ' ' || *s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
