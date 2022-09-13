#include"main.h"

/**
 * _isalpha - checks for alphabets
 *
 * Description: tests if a character is an english alphabet
 *
 * @c: the character to be tested
 *
 * Return: non-zero character if it is an alphabet, otherwise returns 0.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);

	return (0);
}
