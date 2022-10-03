#include <stdio.h>
#include <stdlib.h>
/**
 * countWords - counts the numbers of words in the string
 * @str: source string
 *
 *
 * Return: the number of words.
 */
int countWords(char *str)
{
	int strLen = 0, wordsCount = 0;

	while (*(str + strLen))
	{
		if (*(str + strLen) != ' ')
			if (*(str + strLen + 1) == ' ' || *(str + strLen + 1) == '\0')
				wordsCount++;

		strLen++;
	}

	return (wordsCount);
}

/**
 * initMap -  initializes the map.
 * @map: the map.
 * @str: the string.
 * Return: 0 if map has failed allocating memory, 1 if succeeded.
 */
int initMap(char **map, char *str)
{
	int i, mapI = 0, charsCount = 0;

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) != ' ')
			charsCount++;

		if (*(str + i) != ' ' && (*(str + i + 1) == ' ' || *(str + i + 1) == '\0'))
		{
			*(map + mapI) = malloc(sizeof(char) * ++charsCount);

			if (*(map + (mapI)) == NULL)
			{
				free(*(map + (mapI)));
				return (0);
			}

			*(*(map + mapI) + charsCount) = '\0';

			mapI++;
			charsCount = 0;
		}
	}

	return (1);
}

/**
 * strtow -  splits string into words.
 * @str: the string.
 *
 * Return: pointer to the 2D array representing string into words.
 */
char **strtow(char *str)
{
	int i, mapI = 0, mapJ = 0, wordsCount = 0, res;
	char **map;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordsCount = countWords(str);

	if(!wordsCount)
		return (NULL);

	/* +1 for the NULL at the end */
	map = malloc(sizeof(char *) * (wordsCount + 1));
	if (map == NULL)
	{
		free(map);
		return (NULL);
	}

	res = initMap(map, str);

	if (!res)
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) != ' ')
			*(*(map + (mapI)) +  (mapJ++)) = *(str + i);

		if (*(str + i) != ' ' && (*(str + i + 1) == ' ' || *(str + i + 1) == '\0'))
		{
			mapI++;
			mapJ = 0;
		}
	}

	*(map + (mapI)) = NULL;

	return (map);
}
