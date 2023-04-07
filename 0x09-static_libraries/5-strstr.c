#include "main.h"
#include <stddef.h>
/**
  * _strstr - a function that locates a substring
  * @haystack: param1
  * @needle: param2
  * Return: return char
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *need = needle;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}
		if (*need == '\0')
			return (haystack);
	haystack++;
	}
	return (NULL);
}
