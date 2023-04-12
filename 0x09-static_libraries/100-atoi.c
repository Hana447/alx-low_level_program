#include "main.h"
/**
  *  _atoi - This function convert string to number
  * @s: param
  * Return: return 0;
  */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int found = 0;
	int min = 0;

	while (*s)
	{
		if (*s == '-' && (found == 0 || found == 1))
		{
			min += 1;
			if (min % 2 == 0)
				sign = 1;
			else
				sign = -1;
			found = 1;
		}
		else if (*s == '+' && !found)
		{
			sign = 1;
			found = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			found = 2;
		}
		else if (!(*s >= '0' && *s <= '9') && found == 2)
			break;
		s++;

	}
	return (result * sign);
}
