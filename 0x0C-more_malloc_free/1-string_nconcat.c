#include "main.h"
/**
  * string_nconcat - This is a function
  * @s1:param1
  * @s2:param2
  * @n:param3
  * Return: return0
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;
	char *result = NULL;

	if (n >= len2)
		n = len2;
	result = malloc(len1 + n + 1);
	if (result != NULL)
	{
		if (s1 != NULL)
			memcpy(result, s1, len1);
		if (s2 != NULL)
			memcpy(result + len1, s2, n);
		result[len1 + n] = '\0';
	}
	return (result);
}
