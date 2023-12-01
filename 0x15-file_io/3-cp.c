#include "main.h"
#include <stdio.h>
/**
 * errror_file - checks if there is error in a file
 * @file_from: the file to copy from and checks
 * @file_to: destination of file to copy
 * Return: nothing to return
 */
void error_file(int file_from, to file_to, char, *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERRR_FILENO, "Error: cannot read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot write to file %s\n", argv[2]);
		error(99);
	}
}
/**
 * main - copy content of a file one to another
 * argc: argument count
 * argv: argument vector
 * Return: on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;

	ssize_t nchars, nwr;
	char buf(1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n",  "Usage: cp file_from file_to");
		exit(97);
	}
	file_from open(argv[1], o_RDONLY);
	file_to open(argv[2], o_CREAT | o_WRONLY | o_TRUNC | o_APPEND, 0664);
	error_file(file_from, file_to argv);

	nchar = 1024;
	while (nchar == 1024)
		nchar = read(file_from, buf, 1024);
	if (nchar == -1)
		error_file(-1, 0, argv);
}
error_close = close(file_from);
if (err_close == -1)
{
	dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
	exit(100);
}
