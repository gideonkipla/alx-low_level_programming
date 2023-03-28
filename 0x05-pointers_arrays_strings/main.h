#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
  * reset_to_98 - Updates the value it points to 98
  * @n: pointer to n
  *
  * Return: void
  */

void reset_to_98(int *n)

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer to swap
  * @b: Another integer to swap
  *
  * Return: void
  */

void swap_int(int *a, int *b)

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)

/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void _puts(char *str)

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */

void rev_string(char *s)

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */

void puts2(char *str)

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */

void puts_half(char *str)

/**
  * print_array - Prints n elements of an array of integers
  * @a: Array of integers
  * @n: Number of elements of the array to be printed
  *
  * Return: void
  */

void print_array(int *a, int n)

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)

#endif
