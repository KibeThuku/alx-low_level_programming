#include main.h

/**
 * TASK 1. UNDER THE SNOW - 1-create_file.c
 * create_file:integer function creating a file. 
 * @filename: Pointer pointing to a character file to be created.
 * @text_content: pointer pointing to string characters 
 * to be written to the file.
 * Return:On success 1, On failure -1
 * (file can not be created, file can not be written, write “fails”, etc)
 */

include create_file(const char *filename, char *text_content)
{
	int fdes;
	int let;
	int leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_conten[leng];)
			len++;
	}

	fdes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	let = write((fdes, text_content, leng);

			if (fdes == -1 || let == -1)
			return (-1);

			close(fdes);

			return (1);
}
