#include"main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: An intger typed by user
 *
 * Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int i = n % 10;

	if (n > 0)

	{
		_putchar(i + '0');
		return (i);
	}
	else
	{
		_putchar('0' + -i);
	return (-i);
	}
}
