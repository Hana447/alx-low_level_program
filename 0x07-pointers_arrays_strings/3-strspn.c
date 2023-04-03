#include "main.h"
/**
  * _strspn - This function return the prifix word count
  * @s: param1
  * @accept: param2
  * Return: int
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			return (count);
		count++;
	}
	return (count);
}
