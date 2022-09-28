/**
 * _memcpy - copies from src to dest
 *
 * @src: pointer to the src memory area
 * @dest: pointer to the dest memory area
 * @n: the number of memory blocks we have to traverse in src
 *
 * Return: the pointer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
