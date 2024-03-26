#include <stdio.h>
#include <stdlib.h>

int lower(int c)
{
	return ( c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;

}

int main(void)
{
	printf("%c",lower('W'));
     	return 0;
}
