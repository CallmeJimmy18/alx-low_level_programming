#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
/**
  * read_textfile -  reads a text file and prints it
 * @letters: the number of letters it should read and print
 * @filename: this is the name of the file
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t file;
ssize_t re;
ssize_t wr;
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
re = read(file, buf, letters);
wr = write(STDOUT_FILENO, buf, re);
free(buf);
close(file);
return (wr);
}
