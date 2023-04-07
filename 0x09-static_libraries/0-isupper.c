#include "main.h"
/**
  * _isupper - this function return 1 if it is upercase or 0 if not
  * Return: return 0
  * @c: par 1
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
