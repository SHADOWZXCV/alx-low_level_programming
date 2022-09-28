/**
 * leet - converts most of a string into a leet string!
 * https://en.wikipedia.org/wiki/Leet
 * @a: the string to be converted.
 * Return: the converted string.
 */

char *leet(char *a)
{
	int i = 0;
	char *decryped = "aeotl";
	char *encryped = "43071";

	while (a[i] != '\0')
	{
		char theChar = a[i];
		int j = 0;

		for (; decryped[j] != '\0'; j++)
		{
			if (theChar == decryped[j] || theChar == decryped[j] - 32)
				a[i] = encryped[j];
		}

		i++;
	}

	return (a);
}
