#include "main.h"

/**
 * _stren - finding the length of a string in a given value
 * @s: the pointer that will be updates
 * Return: void that the output is correct
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;

	return (i);
}
