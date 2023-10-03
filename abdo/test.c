#include <stdio.h>


int main(void)
{

	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(':');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			putchar('\n');
			j++;

		}
		i++;
	}
	return (0);
}

