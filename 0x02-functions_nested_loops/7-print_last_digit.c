#include "main.h"
/**
 *prints the last digit of a number
 *@nld: the number
 *Return: value of the last digit 
 */
int print_last_digit(int nld)
{
int pld = (nld % 10);

if (pld < 0)
{

pld = (-1 * pld);
}

_putchar(pld + '0');

return (pld);
}

