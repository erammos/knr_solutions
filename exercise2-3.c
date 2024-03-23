#include <stdio.h>
#include <stdlib.h>

int htoi(char s[]) {
  int i = 0;
  char c;
  int res = 0;
  int finished = 0;

  if (s[0] != '0' && s[1] != 'x')
    return 0;
  i = 2;
  while (!finished) {
    if (s[i] >= '0' && s[i] <= '9') {
      res = res * 16 + (s[i] - '0');
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      res = res * 16 + (s[i] - 'a') + 10;
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      res = res * 16 + (s[i] - 'A') + 10;
    } else
      finished = 1;
    i++;
  }
  return res;
}

int main(void) {
  printf("%d\n", htoi("0xff"));
  printf("%d\n", htoi("0xFF"));
  printf("%d\n", htoi("0xA"));
  printf("%d\n", htoi("0xA1"));
  printf("%d\n", htoi("0x10"));
  return 0;
}
