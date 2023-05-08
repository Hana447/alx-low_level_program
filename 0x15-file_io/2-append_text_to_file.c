#include "main.h"
/**
  * append_text_to_file - function
  * @filename: param;
  * @text_content: param2
  * Return: 1 & -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t count = 0, _write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;
		_write = write(file, text_content, count);
		if (_write != count)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
