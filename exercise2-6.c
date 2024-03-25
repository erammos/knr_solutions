#include <stdio.h>
#include <stdlib.h>

unsigned getbits(unsigned x, int p, int y, int n) {
  unsigned mask = ~(((1 << n) - 1) << (p + 1 - n));
  unsigned y_bits = ((x >> (y + 1 - n)) & ~(~0 << n)) << (p + 1 - n);
  return (x & mask) | y_bits;
}

int main(void) {

  int n = 2;
  int p = 3;
  unsigned x = 0x77;
  int y = 1;

  printf("%x", getbits(x, p, y, n));
}
