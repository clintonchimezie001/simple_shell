#include "shell.h"

/**
 * _strncpy - Copy a string
 * @dest: The destination string to be copied to
 * @src: The source string
 * @n: The number of characters to be copied
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *s = dest;

for (i = 0; src[i] != '\0' && i < n - 1; i++)
{
dest[i] = src[i];
}
if (i < n)
{
while (i < n)
{
dest[i] = '\0';
i++;
}
}
return (s);
}

/**
 * _strncat - Concatenate two strings
 * @dest: The first string
 * @src: The second string
 * @n: The maximum number of bytes to be used
 * Return: The pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *s = dest;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i] = src[j];
i++;
}
if (j < n)
{
dest[i] = '\0';
}
return (s);
}

/**
 * _strchr - Locate a character in a string
 * @s: The string to be parsed
 * @c: The character to look for
 * Return: A pointer to the found character in the string, or NULL if not found
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
}
s++;
} while (*s != '\0');
return (NULL);
}
