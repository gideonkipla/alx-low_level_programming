#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * create_array - writes the character c to stdout
 * @size: The character to print
 * @c: The character to print
 * Return: pointer to array or null
 *
 */

char *create_array(unsigned int size, char c);

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/

char *_strdup(char *str);

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/

char *str_concat(char *s1, char *s2);

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/

int **alloc_grid(int width, int height);

/**
 * alloc_grid - returns a pointe rot a newly created 2D int grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the grid
 */

void free_grid(int **grid, int height);

/**
* *argstostr - concatenates all arguements to the program
* @ac: arguement count
* @av: pointer to arguements
* Return: pointer to new space in memory or null
**/

char *argstostr(int ac, char **av);

#endif
