#include "main.h"
/**
 * print _alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return:x10 a-z
 */
void print_alphabet_x10(void)

{

int x, y;

x = 0;


while (y < 10)

{
for (x = 'a'; x <= 'z'; x++)
{

_putchar(x);
}

	y++;

_putchar('\n');

}

}
