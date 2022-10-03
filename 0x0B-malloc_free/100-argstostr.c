#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: arguments count.
 * @av: the arguments
 *
 * Return: pointer to the conactenated string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, max_size, string_i = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; *(*(av + i) + j); j++)
			max_size++;

	/* max_size + number of words + 1 ( for EOF & new lines needed ) */
	concat = malloc(sizeof(char) * (max_size + ac + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			*(concat + (string_i++)) = *(*(av + i) + j);
		*(concat + (string_i++)) = '\n';
	}

	*(concat + string_i) = '\0';

	return (concat);
}
