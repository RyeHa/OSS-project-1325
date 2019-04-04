#include <stdio.h>

int reverse_digits(int number);

int reverse_digits(int number) {
  int r = 0;     //where get the reversed number
  int n = number;// deposit number to n

  while(n) {  //repeat until n become 0
     r = (r * 10) + (n % 10);   //make r multiplied, and deposit the rest of n/10
     n = n / 10; //devide n at decimal counts
  }

  return r;  //return the deposited number
}

