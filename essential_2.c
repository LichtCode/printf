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
    write(1, s, strlen(s));
    return (strlen(s));
}