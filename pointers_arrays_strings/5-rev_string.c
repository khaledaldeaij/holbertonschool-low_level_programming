
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

