#include "main.h"
/**
  * _pow_recursion - This function returns x the power of y
  * @x: param1
  * @y: param2
  * Return: return int
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
