#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[11] = "Holberton!";

	rev_string(s);
	printf("%s\n", s); /* print reversed string with newline */

	return (0);
}
