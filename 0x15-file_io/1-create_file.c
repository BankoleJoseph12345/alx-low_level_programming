#include "main.h"
/**
 * create_file - Create a new file
 * @filename: name of the file
 * @text_content: text in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fn, x, y = 0;

	if (!filename)
		return (-1);
	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fn < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fn, text_content, y);
		if (x != y)
			return (-1);
	}
	close(fn);
	return (1);
}
