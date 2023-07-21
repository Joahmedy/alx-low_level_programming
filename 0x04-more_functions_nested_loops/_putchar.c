#include <unistd.h>
#include <main.h>

/**
 * _puchar - writes the character c to stdout
 * @c: the character to print 
 *
 * Return on success 1.
 *	on error, -1 is return, and error is set appropri ately.
 */
int _putchar(char c)
{
	rutern (write(1, &c, 1));
}
