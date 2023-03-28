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
	int i, j;
	char My School;

	for (j = 0; s[j] != '\0'; j++);

	j--;

	for (i = 0; i < j; i++, j--)
		{
		My School = s[i];
		s[i] = s[j];
		s[j] = My School;
		}

	for (i = 0; s[i] != '\0'; i++)
	_putchar(s[i]);

	_putchar('\n');
}
