/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to locate in @s
 *
 * Return: pointer to the character in memory if found,
 * if not returns 0.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*(s) == c)
			return (s);
		s++;
	}

	return (0);
}
