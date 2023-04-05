#include "main.h"
/**
  * wildcmp - this function compare the given string
  * @s1:param1
  * @s2:param2
  * Return: return 0;
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
	
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
