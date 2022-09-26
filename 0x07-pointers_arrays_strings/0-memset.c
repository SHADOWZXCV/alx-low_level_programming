/**
 * _memset - fills memory with constant bytes
 *
 * @s: pointer to some lame memory address
 * @b: the filler of the memory address pointed by @s
 * @n: the number of memory blocks we have to fill in @s
 *
 * Return: the pointer @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
