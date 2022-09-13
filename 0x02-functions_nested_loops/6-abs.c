#include"main.h"

/**
 * _abs - gets absolute value of a number
 *
 * @n: the number needed to be absolute
 *
 * Return: the absolute value of the number given
 */
int _abs(int n)
{
	if (n < 0)
		return ((~n) + 1);

	return (n);
}
