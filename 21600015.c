#include <stdio.h>

typedef enum { false, true } boolean;

int reverse_digits(int number);
boolean isPrime(int n);

int reverse_digits(int number) {
  int r = 0;
  int n = number;

  while(n) {
     r = (r * 10) + (n % 10);
     n = n / 10;
  }

  return r;
}

boolean isPrime(int n){

   int num = n;
   int ok = 1;
   boolean find = false;

   for (int i = 2; i < num; i++){
      if (num % i ==0)
         ok--;
      }

   if (ok == 1)
      find = true;

   return find;
}