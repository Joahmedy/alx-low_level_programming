#include <stdio.h>

/**
 * printf_alphabet - utilizes on the _ptcher function to print
 * 		thr alphabet a - z
 *
 */

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}
