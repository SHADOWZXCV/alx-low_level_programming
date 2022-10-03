#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as
 * a parameter.
 *
 * @str: the string to which space be allocated
 * Return: pointer to the allocated space.
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *ptr;

	while (*(str + size))
		size++;
	size++;

	ptr = malloc((size) * sizeof(char));

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
