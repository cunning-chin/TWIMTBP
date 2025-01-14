#include <stdio.h>

int main() {

  int var = 0xDEADBEEF;
  unsigned char* addr = (char*) &var;

  printf("data at address is %0x\n",*addr);
  if(*addr == 0xEF) printf("Little Endian.");
  else printf("Big Endian.");

  return 0;
}
