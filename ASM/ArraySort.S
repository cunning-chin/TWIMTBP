#Bubble Sort.
#Compare two elements, swap if not in order.

.data
array: 3,5,1,8,2,9
size: 6

.text
_start:
  la x8, array  //Array address.
  li x9, size   //Size of array.

  li x10, 0   //Outer Loop index
outer_loop:
  
  li x11, 0 //Inner Loop index

inner_loop:
  lw x12, 0(x8)  //arr[j]
  lw x13, 4(x8)  //arr[j+1]
  
  blt x12, x13, no_swap

  sw x12, 4(x8)
  sw x13, 0(x8)

no_swap:
  addi x11, x11, 1
  blt x11, x10, inner_loop
  
  addi x10, x10, 1
  beq x10, x9, outer_loop

done:
