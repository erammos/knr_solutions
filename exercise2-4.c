#include <stdio.h>
#include <stdlib.h>

void squeeze(char s1[], char s2[]) {
  int i, j;
  for (i = j = 0; s1[i] != '\0'; i++) {
    int k;
    int found = 0;
    for (k = 0; s2[k] != '\0'; k++) {
      if (s1[i] == s2[k]) {
        found = 1;
        break;
      }
    }

    if (!found) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

int main(void) {
  char s1[] = "hello, world!";
  char s2[] = "elo";

  squeeze(s1, s2);
  printf("%s\n", s1);
  return 0;
}
