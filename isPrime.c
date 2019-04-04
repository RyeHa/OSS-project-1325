#include <stdio.h>

int isPrime(int n);

int isPrime(int n){

   int num = n;
   int ok = 1;
   int find = 0;

   for (int i = 2; i < num; i++){
      if (num % i ==0)
         ok--;
      }

   if (ok == 1)
      find = 1;

   return find;
}

