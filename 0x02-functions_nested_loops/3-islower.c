#include"main.h"
/**
 * _islower - checks for lowercase characters
 * Description: tests if a character is a lowercase character
 * @c: the character to be checked
 * Return: non-zero character if it is lowercase, otherwise returns 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);

	return (0);
}
