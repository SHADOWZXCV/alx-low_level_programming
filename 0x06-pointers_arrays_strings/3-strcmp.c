/**
 * _strcmp - compares 2 strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0 if they are equal, negative
 * if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = -1, res = 0;

	while (res == 0)
	{
		i++;
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		if (s1[i] == s2[i])
			continue;
		res = s1[i] - s2[i];

	}

	return (res);
}
