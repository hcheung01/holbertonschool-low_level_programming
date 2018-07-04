#include "holberton.h"

/**
 * puts2 - function with one argument
 * @str: char type pointer
 *
 * Description: prints one char out of 2 of a string
 * Return: na
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}