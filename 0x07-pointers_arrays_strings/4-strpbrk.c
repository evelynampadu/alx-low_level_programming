#include "main.h"
#include <stdio.h>

/**
*  * _strpbrk - locate first matching character
*   * @s: string to search
*    * @accept: set of characters to match
*     * Return: pointer to matching character or NULL if not found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
