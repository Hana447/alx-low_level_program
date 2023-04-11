#include "main.h"
/**
  * argstostr - This is a function
  * @ac:arg
  * @av:arg2
  * Return: return char
  */
char *argstostr(int ac, char **av)
{
	int i, num = 0, len = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	t = malloc(sizeof(char) * len + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(&t[num], av[i]);
		num += strlen(av[i]);
		t[num++] = '\n';
	}
	return (t);
}
