#include "main.h"

/**
 * print_int - prints an integer
 * @n: integer to be printed
 */
void print_int(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_int(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}


/**
 * count_int - counts number integers printed
 * @n: integer to be printed
 * Return: On success number of int char printed.
 */
int count_int(int n)
{
	int temp = n;
	int count = 0;

	print_int(n);

	if (temp < 0)
	{
		count++;
		temp = -n;
	}

	while (1)
	{
		if (temp > 10)
		{
			temp = (temp / 10);
			count++;
		}
		else
			break;
	}


	return (count + 1);
}



/**
 * args_c - prints the char passed to it
 * @c: char to be printed
 * Return: On success 1.
 */
int args_c(char c)
{
	write(1, &c, 1);

	return (1);
}
