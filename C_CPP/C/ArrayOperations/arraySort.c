//Input: arr = {170, 45, 75, 90, 802, 24, 2, 66}
//Output: arr = {2, 24, 45, 66, 75, 90, 170, 802}

#include <stdio.h>
#include <stdlib.h>


void selection_sort(int arr[], int size) {
  
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;

    for(int j = i+1; j < size; j++) {
      if(arr[j] < arr[min_idx]) min_idx = j;
    }

    int temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
  }

}

int main() {

  int arr[8] = {170, 45, 75, 90, 802, 24, 2, 66};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  //Sort array in ascending Order.
  
  //Approach 1: Using selection sort.

  selection_sort(arr, arr_size);

  printf("Sorted Array: ");
  for (int i = 0; i < arr_size; i++) {
    printf("\t %0d", arr[i]);
  }
  printf("\n");
  
  int arr1[6] = {3, 0, -1, 8, 7, 2};
  int arr1_size = sizeof(arr1)/sizeof(arr1[0]);

  selection_sort(arr1, arr1_size);

  printf("Sorted Array: ");
  for (int i = 0; i < arr1_size; i++) {
    printf("\t %0d", arr1[i]);
  }
  printf("\n");
  
}
