#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first str
 * @s2: second str
 * Return: pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ptr == NULL)
		return (NULL);

	size1 = 0, size2 = 0;

	while (*(s1 + size1))
	{
		*(ptr + size1) = *(s1 + size1);
		size1++;
	}

	while (*(s2 + size2))
	{
		*(ptr + size1) = *(s2 + size2);
		size1++;
		size2++;
	}

	*(ptr + size1) = '\0';

	return (ptr);
}
