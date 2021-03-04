#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge
 *
 * @level: the level of the Menger Sponge to draw
 */
void menger(int level)
{
	int sponge = pow(3, level);
	int i, j, x, y;
	char s = ' ';

	if (level < 0)
		return;

	if (level == 0)
		printf("#\n");

	else
	{
		for (i = 0; i < sponge; i++)
		{
			for (j = 0; j < sponge; j++)
			{
				s = '#';
				x = i;
				y = j;
				while (x > 0 || y > 0)
				{
					if ((x % 3 == 1) && (y % 3 == 1))
						s = ' ';
					x = x / 3;
					y = y / 3;
				}

			printf("%c", s);
			}

		printf("\n");
		}
	}
}
