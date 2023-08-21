#include "main.h"

/**
 * _isupper - checks if c is an uppercase
 * @c: is the character being checked
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

/**
 * _memset - stores a value for a variable
 * @s: this is the variable
 * @b: this is the character that will be added
 * @n: this is the number of bytes
 * Return: returns @s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

/**
 * _strcat - concatinates the string
 * @dest: other part of string to be appended here
 * @src: the string added to dest
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}


/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
        int sign = 1, i = 0;
        unsigned int res = 0;

        while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
        {
                if (s[i] == '-')
                        sign *= -1;
                i++;
        }
        while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
        {
                res = (res * 10) + (s[i] - '0');
                i++;
        }
        res *= sign;
        return (res);
}

/**
 * _isdigit - checks if c is a digit
 * @c: is the character being checked
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}

/**                                                                                                                                                                   
 * _memcpy - copies the string to dest                                                                                                                                
 * @dest: this is the destination                                                                                                                                     
 * @src: this is the source                                                                                                                                           
 * @n: this is the number of bytes                                                                                                                                    
 * Return: this will return the dest string                                                                                                                           
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j = n;
for (i = 0; i < j; i++)
{
dest[i] = src[i];
}
return (dest);
}

/**
 * _strncat - concatinates n bytes of the string
 * @dest: string will be appended here
 * @src: appended string
 * @n: number of bytes
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _strchr - locates a character
 * @s: this is the string to be looked through
 * @c: this is the character being searched for in the string
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
int j;
for (j = 0; s[j] <= '\0'; j++)
{
if (s[j] == c)
{
return (&s[j]);
}
}
return (0);
}

/**
 * _strlen - gets the length of the string
 * @s: this is the string
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}

/**
 * _strncpy - Copies n charcters of string
 * @dest: string copied into this
 * @src: string copied into dest
 * @n: number of characters to be copied
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}

/**
 * _islower - Checks if c is lowercase.
 * @c: is the char to be checked.
 * Return: 1 or 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

/**
 * _puts - prints string to standard output
 * @str: string to be printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

/**
 * _strcmp - compares strings s1 and s2
 * @s1: stirng to be compared
 * @s2: string to be compared
 * Return: returns s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}

/**                                                                                                                                                                   
 * _strspn - sees how far the the two strings are equal                                                                                                               
 * @s: this is the main string                                                                                                                                        
 * @accept: these are the letters to be excluded                                                                                                                      
 * Return: returns the number of bytes                                                                                                                                
 */
unsigned int _strspn(char *s, char *accept)
{
int n;
int i;
n = 0;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
n++;
break;
}
else if (accept[i + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}

/**
 * _isalpha - Checks if its in aphabet.
 * @c: character to be checked
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**                                                                                                                                                                   
 * _strpbrk - searches a string for any of a set of bytes                                                                                                             
 * @s: looks for occurrences in this                                                                                                                                  
 * @accept: the letters to search for                                                                                                                                 
 * Return: returns the pointer                                                                                                                                        
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int p;
int k;
i = 0;
k = 0;
while (s[i] != '\0')
{
i++;
}
while (accept[k] != '\0')
{
k++;
}
for (j = 0; j < i; j++)
{
for (p = 0; p < k; p++)
{
if (s[j] == accept[p])
return (&s[j]);
}
}
return ('\0');
}

/**                                                                                                                                                                   
 * _strstr - Entry point                                                                                                                                              
 * @haystack: input                                                                                                                                                   
 * @needle: input                                                                                                                                                     
 * Return: Always 0 (Success)                                                                                                                                         
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
}
return (0);
}

/**
 * _abs - Gets absolute value of n.
 * @n: number to be checked
 * Return: The absolute value.
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
return (-n);
}

/**
 * _strcpy - copies the string
 * @dest: where the string will be copied to
 * @src: the copied string
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
j = 0;
while (*(src + j) != '\0')
{
j++;
}
for (i = 0; i <= j; i++)
{
dest[i] = src[i];
}
dest[j] = '\0';
return (dest);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

