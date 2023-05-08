#include "main.h"

/**
 * create_file - function
 * @filename: param 1
 * @text_content: param 2
 * Return: -1, 1
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int _write, file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (file == -1)
		return (-1);
	if (!text_content)
	{
		close(file);
		return (1);
	}
	while (text_content[count])
		count++;
	_write = write(file, text_content, count);

	if (_write == -1)
		return (-1);
	close(file);
	return (1);
}
