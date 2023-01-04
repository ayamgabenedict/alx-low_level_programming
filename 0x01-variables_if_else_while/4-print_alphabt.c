#include <stdio.h>
#include <stdlib.h>

int main()
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}

	putchar('\n');
	

	
	return (0);
}

