#include "main.h"

/**
 * print_sign - Entry point
 * Decription - Checks sign of number
 *
 * @n: variable number to be checked
 *
 * Return: 0 if succesful
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
