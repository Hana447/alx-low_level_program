#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - function
  * filename: param
  * letters: param1
  */
#define BUF_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *temp;
	ssize_t _read, _write;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	temp = malloc (sizeof(char) * letters);

	_read = read(file, temp, letters);
	_write = write(STDOUT_FILENO, temp, _read);

	if (_read != _write)
		return (0);
	free(temp);
	close(file);

	return (_read);
}
