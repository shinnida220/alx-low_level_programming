#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: filename.
 * @text_content: content writen to the file
 * Return: 1 on success. -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_of_letters, rw_resp;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_of_letters = 0; text_content[num_of_letters]; num_of_letters++)
		;

	rw_resp = write(fd, text_content, num_of_letters);

	if (rw_resp == -1)
		return (-1);

	close(fd);

	return (1);
}
