/*
 * Given an integer array nums sorted in non-decreasing order,
 * remove the duplicates in-place such that each unique element appears only once. 
 * The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
 */

#include <stdio.h>

int removeDuplicate(int *arr, int size) {

  int idx = 1;
  for(int ii=1; ii<size; ii++) {
    if(arr[ii] != arr[ii-1]) { //Not Unique.
      arr[idx] = arr[ii];
      idx++;
    }
  }
  return idx;
}

int main() {

  int nums[] = {0,0,1,1,1,2,2,3,3,4};
  int nums_size = sizeof(nums)/sizeof(nums[0]);

  printf("Original Array: \n");
  for (int ii=0; ii < nums_size; ii++) {
    printf("nums[%0d] = %0d \n", ii, nums[ii]);
  }

  int newSize = removeDuplicate(nums, nums_size);

  printf("Array after duplicates removed: \n");
  for (int ii=0; ii < newSize; ii++) {
    printf("nums[%0d] = %0d \n", ii, nums[ii]);
  }


  return 0;
}
