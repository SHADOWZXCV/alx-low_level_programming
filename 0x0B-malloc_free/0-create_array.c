#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: init character
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);
	unsigned int i;

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}
