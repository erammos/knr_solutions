#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned x)
{
	int b = 0;
	while(x &= (x - 1)) b++;
	return b + 1;
}

int main(void)
{
     printf("%d",bitcount(0x76));

	return 0;
}
