#include "main.h"
#include <string.h>
/**
  * is_palindrome - this function check if the string is palindrom
  * @s: param1
  * Return: return0
  */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, 0, len - 1));
}

/**
  * palindrome -this function help
  * @s: param1
  * @end: param2
  * @start: param3
  * Return: return
  */
int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome(s, start + 1, end - 1));
}
