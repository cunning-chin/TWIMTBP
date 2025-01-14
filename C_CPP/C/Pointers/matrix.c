//Transpose a matrix.

#include <stdio.h>

#define ROWS 2
#define COLS 2

void transpose(int *src, int *dest, int rows, int cols){

  //src[i][j] == dest[j][i]
  for(int ii = 0; ii < rows; ii++) {
    for(int jj = 0; jj < cols ; jj++) {
      *(dest + jj*rows + ii) = *(src + ii*cols + jj);
    }
  }


}

int main(){
  
  int arr[ROWS][COLS] = {{2,4}, {1,3}};
  int arrt[ROWS][COLS];

  printf("Original Matrix: \n");
  printf(" (%0d, %0d), (%0d, %0d) \n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
  transpose((int *)arr, (int *)arrt, ROWS, COLS);
  printf("Transposed Matrix: \n");
  printf(" (%0d, %0d), (%0d, %0d) \n", arrt[0][0], arrt[0][1], arrt[1][0], arrt[1][1]);
}
