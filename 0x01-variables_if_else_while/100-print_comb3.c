#include <stdio.h>

/**
 * main - Entry point
 * Description: 'make an unbeatable combination for success'
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
