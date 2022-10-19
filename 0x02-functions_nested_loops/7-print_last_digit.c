#include "main.h"
/**
 *prints the last digit of a number
 *@x: the number
 *Return: value of the last digit 
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
	y *= -1;

	_putchar(y + '0');

	return (0);
}

