#include <stdio.h>
#include <stdlib.h>

int any(char s1[], char s2[]) {

  int i;
  int j;
  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }
  return -1;
}

int main(void) {
  char s1[] = "hello, world!";
  char s2[] = "wd";

  printf("%d\n", any(s1, s2));
  return 0;
}
