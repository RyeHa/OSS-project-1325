#include <stdio.h>

typedef enum { false, true } boolean;

int reverse_digits(int number);
boolean isPrime(int n);

int reverse_digits(int number) {
  int r = 0;  //where get the reversed number
  int n = number;  ;// deposit number to n

  while(n) {                             //repeat until n become 0
     r = (r * 10) + (n % 10);   //make r multiplied, and deposit the rest of n/10
     n = n / 10;              //devide n at decimal counts
  }

  return r;                 //return the deposited number
}

boolean isPrime(int n){

   int num = n;
   int ok = 1;            //the checking value of prime
   boolean find = false;  //initially, it's false

   for (int i = 2; i < num; i++){  //i starts from 2, because 0,1, and 2 is already a prime number
      if (num % i ==0)   //if num has any dividers
         ok--;           //make it not ok
      }

   if (ok == 1)
      find = true;    //if num has no dividers, check that it is a prime number

   return find;  //return the value if true or false
}