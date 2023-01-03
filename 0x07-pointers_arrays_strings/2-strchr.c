#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the address of memory to search
 * @c: the string to search
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s[i]);
		s++;
	}

	return (NULL);
}
