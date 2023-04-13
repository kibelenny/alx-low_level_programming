#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, rd;
	size_t total_read = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	while(total_read < letters)
	{
		rd = read(fd, buffer, letters - total_read);

		if (rd == 0)
			break;

		if (rd == -1)
			return (0);

		wr = write(STDOUT_FILENO, buffer, rd);

		if (wr == -1)
			return (0);
		total_read += wr;
	}
	return (total_read);
}
