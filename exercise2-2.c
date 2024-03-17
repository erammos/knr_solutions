#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  char c;
  char s[100];
  int lim = 100;
  int finished = 0;

  while (!finished) {
    if (i >= lim - 1)
      finished = 1;
    else if ((c = getchar()) == '\n')
      finished = 1;
    else if (c == EOF)
      finished = 1;
    else {
      s[i] = c;
      i++;
    }
  }
  s[i] = '\0';
  printf("%s", s);
}
