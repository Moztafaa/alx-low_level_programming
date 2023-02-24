#include "main.h"

/**
 * _isdigit - checks if par is num
 * @c: input num
 * Return: 1 of 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
