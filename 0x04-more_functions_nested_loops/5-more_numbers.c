#include"main.h"

/**
 * function that prints 10 times the numbers, from 0 to 14
 * 
 * Return: 0-14 ten times , followed by a new line
 */
void more_numbers(void)
{
	int x,y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}