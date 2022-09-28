/**
 * _strncpy - copies a string from src to dest
 * @dest: string we paste string to.
 * @src: string to copy from.
 * @n: the length we should stop at.
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
