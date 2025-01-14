//Reverse an Array Using Pointers
//Input: {1, 2, 3, 4} → Output: {4, 3, 2, 1}

#include <stdio.h>

void reverse(int *arr, int size){
  int *start = arr;
  int *end = arr + size - 1;

  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end --;
  }
}

int sum(int *arr, int size) {
  
  int result=0;
  for (int ii=0; ii<size; ii++) {
    result += *arr;
    arr++;
  }

  return result;
}

int max(int *arr, int size) {
  
  int max_val = 0;
  for (int ii=0; ii<size; ii++) {
    if(*arr > max_val) max_val = *arr;
    arr++;
  }

  return max_val;
}

int main(){

  int arr[] = {1,2,8,4, -1, -5};
  int size = sizeof(arr)/sizeof(arr[0]);

  reverse(arr, size);

  printf("Reversed Array: ");
  for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
  }
  printf("\n");

  printf("Sum of array is: %d\n", sum(arr, size));
  
  printf("Max element in array is : %d \n", max(arr, size));
}
