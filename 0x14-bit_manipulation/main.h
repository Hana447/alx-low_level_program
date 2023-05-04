#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>

int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);

#endif
