#include "main.h"
/**
  * *_strcpy - This function copy to dest
  * @dest: param 1
  * @src: param2
  * Return: return character
  */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0') 
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

