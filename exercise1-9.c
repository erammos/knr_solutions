#include <stdio.h>

int main()
{
    int c = 0;
    int p = 0;

    while ((c = getchar()) != EOF) {
	if ((c == ' ' || c == '\t') && (p == ' ' || p == '\t'))
	    continue;
	if (c =='\t') c = ' ';
	putchar(c);
	p = c;
    }
}
