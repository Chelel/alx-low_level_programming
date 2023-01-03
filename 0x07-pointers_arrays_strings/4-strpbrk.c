#include "main.h"

/**
 * _strpbrk - locates the first occurence,
 * @s: address of memory to search
 * @accept: memory address to accept.
 * Return: the pointer to s.
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		char *ptr;
		for (ptr = accept; *ptr != '\0'; ptr++)
		{
			if (*s == *ptr)
			{
				return (s);
			}
		}
	}
	return (NULL);
}

