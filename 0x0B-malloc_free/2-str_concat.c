#include "main.h"
/**
 *_strlen - count arrray
 *@s: array of elements
 *Return: i
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*Count character of string*/
	{
		i++;
	}

	return (i);
}

/**
 *str_concat - back a pointer to array
 *@s1: Array one
 *@s2: Array two
 *Return: Always an array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	/*If the array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
