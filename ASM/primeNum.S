#Algorithm:
#Divide from 2 to sqrt(num).

_start:

li x5, 1  //is Prime
li x7, 1
li x8, 11  //num
li x9, 2  //divisor

check_divisor:
  # i <= sqrt(num)
  # i*i <= num
  mulw x11, x9, x9
  bgt x11, x8, done #Done with checking

  rem x10, x8, x9 // num % i
  beqz x10, not_prime

  addi x9, x9, 1
  j check_divisor

not_prime:
  li x5, 0

done:
  ecall

