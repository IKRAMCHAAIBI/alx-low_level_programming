#include "main.h"

/**
 * _strlen_recursion - main function
 *
 * @s: Function
 *
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int Int = 0;

	if (*s)
	{
	Int++;
	Int += _strlen_recursion(s + 1);
	}
	return (Int);
}
