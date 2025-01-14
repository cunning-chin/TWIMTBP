#include <stdio.h>

int searchIndex(int arr[], int size, int value){

  //BinarySearch.
  //Split in half. If max < value, search in other half. Else first half.
  
  int start, end, middle;

  start = 0;
  end = size -1;

  while (start <= end) {
    middle = start + (end - start)/2;
    if(arr[middle] == value) return middle;

    if(arr[middle] < value) start = middle + 1;
    else end = middle - 1;
  }

  return -1;
}

int main(){

  int arr[] = {1,2,3,4,8,9,10,12};
  int size = (sizeof(arr)/sizeof(arr[0]));

  int index = searchIndex(arr, size, 10);

  if(index == -1) printf("Number doesn't exist.\n");
  else printf("Number exists at index %0d\n", index);

  return 0;
}
