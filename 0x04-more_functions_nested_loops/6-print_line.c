/*
 * File: 6-print_line.c
 * Auth: Julien Barbier
 * Duration: Project will start Dec 15, 2022 6:00 AM, must end by Dec 16, 2022 6:00 AM
 */

#include "alxlowlevel.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
