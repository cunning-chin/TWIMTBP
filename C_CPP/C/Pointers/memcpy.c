#include <stdio.h>
#include <stdint.h>

void ss_memcpy(const void *src, void *dest, size_t size) {

  //Bytewise copy
  const uint8_t *s = (const uint8_t *) src;
  uint8_t *d = (uint8_t *) dest;

  for(int ii = 0; ii < size; ii++){
    d[ii] = s[ii];
  }

}

int main(){

  int src[] = {3,5,7};
  int dest[5];

  ss_memcpy(src, dest, sizeof(src));

  for(int ii=0; ii < sizeof(dest)/dest[0]; ii++) {
    printf("dest[%0d] = %0d \n", ii, dest[ii]);
  }

}
