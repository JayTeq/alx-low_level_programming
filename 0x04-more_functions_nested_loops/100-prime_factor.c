/*
 * File: 100-prime_factor.c
 * Julien Barbier
 * 
 * Duration: Project will start Dec 15, 2022 6:00 AM, must end by Dec 16, 2022 6:00 AM
 */

#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
