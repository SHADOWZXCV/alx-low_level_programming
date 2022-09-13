#include"main.h"

/**
 * print_sign - checks the sign of a number
 * 
 * @n: the number to be checked
 *
 * Return: 0 if it is zero, 1 if positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
