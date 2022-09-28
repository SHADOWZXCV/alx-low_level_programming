int _strlen(char *arr);
/**
 * _strncat - concatenates 2 strings
 * @dest: string we concat to.
 * @src: string to concat from.
 * @n: the length we should stop at.
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = _strlen(dest) - 1;
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[destLen] = src[i];
		destLen++;
		i++;
	}

	dest[destLen] = '\0';

	return (dest);
}

/**
 * _strlen - finds string length
 * @arr: the string we need its length
 * Return: the string length
 */
int _strlen(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
		i++;

	return (++i);
}
