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


while (x < 10)

{
for (y = 'a'; y <= 'z'; y++)
{

_putchar(y);
}

	x++;

_putchar('\n');

}

}
