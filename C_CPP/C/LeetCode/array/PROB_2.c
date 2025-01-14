/*
 * Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 */

#include <stdio.h>

void rotate(int* nums, int numsSize, int k){

  k = k % numsSize;

  int temp[k];

  for(int ii=0; ii<k; ii++) {
    temp[ii] = nums[numsSize + ii - k];
  }

  for(int jj=numsSize-k-1; jj >= 0; jj--) {
    nums[jj + k] = nums[jj];
  }

  for(int kk=0; kk<k; kk++) {
    nums[kk] = temp[kk];
  }

}

int main() {

  int nums[] = {0,0,1,1,1,2,2,3,3,4};
  int numsSize = sizeof(nums)/sizeof(nums[0]);

  printf("Size of array: %0d\n", numsSize);

  int k = 3; //Rotate by?

  printf("Original Array: \n");
  for (int ii=0; ii < numsSize; ii++) {
    printf("nums[%0d] = %0d \n", ii, nums[ii]);
  }

  rotate(nums, numsSize, k);

  printf("Array after rotate: \n");
  for (int ii=0; ii < numsSize; ii++) {
    printf("nums[%0d] = %0d \n", ii, nums[ii]);
  }
  return 0;
}
