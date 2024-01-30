#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * args_s - prints the str to the stdout
 * @s: string to be printed
 * Return: On success number of string printed.
 */
int args_s(char *s)
{
	write(1, s, _strlen(s));
	return (_strlen(s));
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
