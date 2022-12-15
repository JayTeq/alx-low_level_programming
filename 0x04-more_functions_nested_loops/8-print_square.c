/*
 * File: 8-print_square.c
 * Auth: Julien Barbier
 * Duration: Project will start Dec 15, 2022 6:00 AM, must end by Dec 16, 2022 6:00 AM
 */

#include "i"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
