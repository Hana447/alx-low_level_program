#include "main.h"
/**
  * _strstr - a function that locates a substring
  * @haystack: param1
  * @needle: param2
  * Return: return char
  */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	while (*needle)
	{
		for (ptr = haystack; *ptr != '\0'; ++ptr)
		{
			if (*needle == *ptr)
				return (needle);
		}
		++needle;
	}
	return (needle);
}
