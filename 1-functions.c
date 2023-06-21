#include <ctype.h>
#include "monty.h"

/**
 * is_digit - checks if a string is a digit
 * @string: string to be checked
 *
 * Return: 1 if success, else 0
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
/**
 * isnumber - checks if string is a number
 * @str: string to be checked
 *
 * Return: 1 if string is a number, else, 0.
 */
int isnumber(char *str)
{
	int n;

	if (!str)
		return (0);

	for (n = 0; str[n]; n++)
		if (n < '0' || n > '9')
			return (0);

	return (1);
}
