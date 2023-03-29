#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[11] = "Holberton!";

	rev_string(s);
	printf("%s\n%s\n", s, s);

	return (0);
}
