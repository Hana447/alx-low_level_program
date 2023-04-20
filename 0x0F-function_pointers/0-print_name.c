#include "function_pointers.h"
/**
  * print_name - this is a function
  * @name: param1
  * @f: param2
  */
void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *) = f;

	f_ptr(name);
}

