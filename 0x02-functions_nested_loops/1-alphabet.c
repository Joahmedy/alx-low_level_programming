#include <main.h>

/**
 * printf_alphabet - utilizes on the _ptcher function to print
 *		thr alphabet a - z
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_puchar('\n');
}
