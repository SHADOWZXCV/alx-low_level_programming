/**
 * rot13 - encodes a string to rot13.
 * https://en.wikipedia.org/wiki/ROT13
 * @a: string to be encoded.
 * Return: encoded string.
 */

char *rot13(char *a)
{
	int i = 0;
	char *decoded = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encoded = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (a[i] != '\0')
	{
		int j = 0;

		for (; decoded[j] != '\0'; j++)
		{
			if (a[i] == decoded[j])
			{
				a[i] = encoded[j];
				break;
			}
		}
	}
}
