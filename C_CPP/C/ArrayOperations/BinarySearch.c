#include <stdio.h>

int binarySearch(int arr [], int low, int high, int key) {
  
  int mid_idx = (low + high) / 2;
  
  if( high < low) return -1;
  if (key == arr[mid_idx]) return mid_idx;
  if (key > arr[mid_idx]) return binarySearch(arr, mid_idx + 1, high, key);
  else return binarySearch(arr, 0, mid_idx - 1, key);

}

int main() {

  int arr[5] = { 5, 6, 7, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 3;
  printf("Key 3: %d \n", binarySearch(arr, 0, size, key));

  key = 5;
  printf("Key 5: %d \n", binarySearch(arr, 0, size, key));

  key = 7;
  printf("Key 7: %d \n", binarySearch(arr, 0, size, key));
}
