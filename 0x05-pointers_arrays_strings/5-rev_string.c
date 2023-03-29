#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c = 0, k = 0;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 0; k <= c; k++)
	{
		a++;
	}

	for (i = 0; i <= (c / 2 - 1); i++)
	{
		aux = s[i];
		s[i] = *(--a);
		*a = aux;
	}
}

int main(void)
{
	char s[11] = "Holberton!";

	rev_string(s);
	printf("%s\n%s\n", s, s); // print original and reversed strings with newline

	return (0);
}
