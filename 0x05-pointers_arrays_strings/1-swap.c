#include "main.h"

/**
 * swap_int - swaps piont value.
 * @a: first integer.
 * @b: second one.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
