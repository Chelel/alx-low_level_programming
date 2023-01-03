#include "main.h"

/**
 * _strspn - gets length of
 * a prefix substring
 * @s:  the address of the string
 * @accept: address of the accet string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	char *outer_pointer = s;
	char *inner_pointer;

	while (*outer_pointer != '\0')
	{
		inner_pointer = accept;
		while (*inner_pointer != '\0')
		{
			if (*inner_pointer == *outer_pointer)
			{
				break;
			}
			inner_pointer++;
		}
		if (*inner_pointer == '\0')
		{
			return (counter);
		}
		outer_pointer++;
		counter++;
	}
	return (counter);
}

