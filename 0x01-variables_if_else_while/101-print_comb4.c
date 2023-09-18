#include <stdio.h>

/**
 * main - Entry point
 * Description: The more brains you use, the less material you need
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
