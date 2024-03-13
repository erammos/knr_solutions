#include <stdio.h>


int main()
{
	int c = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
		}
		else putchar(c);
	}

}
