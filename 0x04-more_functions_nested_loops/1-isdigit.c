#include"main.h"

/**
 * _isdigit - checkes for numerals
 * @c:THe character to be checked
 * Return: 1 for digit and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	{
		return (1);
	}
	return (0);
}


