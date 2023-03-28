#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - this program print random password
  * Return: return 0
  */
#define PASSWORD_LENGTH 10
int main(void)
{
char password[PASSWORD_LENGTH + 1];
char charset[80] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!£$%^&*()_+{}:@";
const int charset_size = sizeof(charset) - 1;
srand(time(NULL));

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
	password[i] = charset[rand() % charset_size];
}
password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);
return (0);
}
