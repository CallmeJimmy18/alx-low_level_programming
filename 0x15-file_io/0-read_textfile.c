#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fle;
char *buf = malloc(sizeof(char) * letters);
ssize_t r;
ssize_t w;
fle = open(filename, O_RDONLY);
if (fle == -1)
{
return (0);
}
r = read(fle, buf, letters);
w = write(STDOUT_FILENO, buf, r);
free(buf);
close(fle);
return (w);
}
