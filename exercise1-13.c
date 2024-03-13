#include <stdio.h>

#define IN_WORD 0
#define OUT_WORD 1
#define MAX_WORDS 128

int main()
{
    int c = 0;
    int state = OUT_WORD;
    int histogram[MAX_WORDS];
    for (int i = 0; i < MAX_WORDS; i++) {
	histogram[i] = 0;
    }

    int w = 0;
    while ((c = getchar()) != EOF) {

         if (c == ' ' || c == '\t' || c == '\n') {
	    state = OUT_WORD;
	}
	else if (state == OUT_WORD)
	{
	  state = IN_WORD;
	  histogram[w] = 1;
	  ++w;
	}
	 else {
		 ++histogram[w - 1];
	 }
    }

    printf("\nHISTOGRAM OF WORDS LENGTH\n");
    for (int i = 0; i < w; i++) {
	printf("%d ", i);
	for (int j = 0; j < histogram[i]; j++) {
	    putchar('*');
	}
	putchar('\n');
    }

}
