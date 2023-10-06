#include "main.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, rstatus, k;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (k = 0; text_content[k] != '\0'; k++);
		rstatus = write(f, text_content, k);
		if (rstatus == -1)
			return (-1);
	}

	close(f);
	return (1);
}
