#include "main.h"

/**
 * print_number - print number from 0 to 9.
 * Return: don't return.
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

