#include <stdio.h>

int main() {
  
  int depth = 5;

  for(int ii=0; ii<depth; ii++) {
    for(int jj = 0; jj<ii+1; jj++){
      printf("*");
    }
    printf("\n");
  }
  
  //Using Spaces.
  for(int ii=0; ii<depth; ii++) { //Print rows.
    for(int kk = 0; kk<2*(depth-ii-1); kk++){ //Print white spaces.
      printf(" ");
    }
    for(int jj = 0; jj<2*ii +1; jj++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
