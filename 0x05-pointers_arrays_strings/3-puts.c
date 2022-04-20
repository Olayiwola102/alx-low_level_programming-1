#include "main.h"
/**
 * _puts - printing of string,  followed by a new line, to stdout
 * @str: The character to be printed
 * Return: If the output is correct
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar (str[i]);
		i++;
	}

	_putchar ('\n');

}
