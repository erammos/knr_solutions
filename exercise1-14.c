#include <stdio.h>

#define NUM_CHARS 26

int main()
{
    int c = 0;
    int histogram[NUM_CHARS];

    for (int i = 0; i < NUM_CHARS; i++) {
	histogram[i] = 0;
    }

    while ((c = getchar()) != EOF) {
	if (c >= 'a' && c <= 'z') {
	    ++histogram[c - 'a'];
	}
    }

    printf("\nHISTOGRAM OF CHARS\n");

    for (int i = 0; i < NUM_CHARS; i++) {
	printf("%c ", i + 'a');
	for (int j = 0; j < histogram[i]; j++) {
	    putchar('*');
	}
	putchar('\n');
    }

}
