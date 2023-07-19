#include <main.h>

/**
 * printf_alphabet - utilizes on the _ptcher function to print
 *		thr alphabet a - z
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_puchar('\n');
}
