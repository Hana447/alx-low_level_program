i#include "main.h"
/**
  * _strlen_recursion - This function return the length of a string
  * @s:param2
  * Return: return 1
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
