#include "main.h"
#include <unstd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile-function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: filename (pointer to an array)
 * @letters: letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, nrd, buff);

	close(fd);
	if (nrd == -1)
	free(buff);
	return (0);
	return (nwr);
}
