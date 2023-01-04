#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int anything = 48;

	do {
		putchar(anything);
		anything++;
	}while (anything <= 57);

	anything = 'a';
	while ( anything < 'g')
	{
		putchar(anything);
		anything++;
	}

	putchar('\n');

	return (0);
}
