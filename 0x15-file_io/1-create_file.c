#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - Create a function that creates a file
 * @filename: the name of the file to create
 * @text_content: s a NULL terminated string
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
int nwf;
int len, wr;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
{
len++;
}
}
nwf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(nwf, text_content, len);
if (nwf == -1 || wr == -1)
{
return (-1);
}
close(nwf);
return (1);
}
