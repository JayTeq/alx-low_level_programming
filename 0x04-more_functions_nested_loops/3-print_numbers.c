/*
 * File: 3-print_numbers.c
 * Auth: Julien Barbier
 * Duration: Project will start Dec 15, 2022 6:00 AM, must end by Dec 16, 2022 6:00 AM
 */

#include "alxlowlevel.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
