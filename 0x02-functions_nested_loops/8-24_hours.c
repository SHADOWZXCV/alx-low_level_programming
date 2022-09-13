#include "main.h"
/**
 * jack_bauer - all minutes of the day
 */
void jack_bauer(void)
{
	int hours = 0, i = 0;

	for (;; i++)
	{
		int j = 0, minutes = 0;

		if (i > 3 && hours == 2)
			break;

		while (j <= 9 && minutes <= 5)
		{
			_putchar('0' + hours);
			_putchar('0' + i);
			_putchar(':');
			_putchar('0' + minutes);
			_putchar('0' + j);
			_putchar('\n');

			if (j == 9)
			{
				j = 0;
				minutes++;
				continue;
			}
			j++;
		}

		if (i == 9)
		{
			i = -1;
			hours++;
		}
	}

}
