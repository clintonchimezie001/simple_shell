#include "shell.h"

/**
 * interactive -verifies whether the shell is in interactive mode or not.
 * @info: A pointer to the info_t structure.
 *
 * Return: Returns ‘1’ if shell is in intrc. mode, else returns ‘0’.
 */
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim -determines whether a character is a delim.
 * @c: Character to check
 * @delim: Delimiter string
 * Return: Returns 1 if the character is a delimiter, otherwise returns 0.
 */
int is_delim(char c, char *delim)
{
while (*delim)
{
if (*delim == c)
return (1);
delim++;
}
return (0);
}

/**
 * _isalpha -determines if a character is an alphabetic character.
 * @c: The character to be examined
 * Return: Returns ‘1’ if the chara c is an alphabetic chara, else ‘0’.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

/**
 * _atoi - This function converts a string into an integer.
 * @s: The String to be converted
 * Return: returns converted intg if num are present in string; else ‘0’.
 */
int _atoi(char *s)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;

for (i = 0; s[i] != '\0' && flag != 2; i++)
{
if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
result = result * 10 + (s[i] - '0');
}
else if (flag == 1)
flag = 2;
}

if (sign == -1)
output = -result;
else
output = result;

return (output);
}
