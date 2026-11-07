
#include <stdio.h>

/**
 * main - Prints hexadecimal digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	number = 0;
	letter = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

