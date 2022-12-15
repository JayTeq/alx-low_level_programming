/*
 * File: 0-isupper.c
 * Auto: Julien Barbier
 * Duration: Project will start Dec 15, 2022 6:00 AM, must end by Dec 16, 2022 6:00 AM
 */

#include "alxlowlevel.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
