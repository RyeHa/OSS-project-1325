#include "21700514.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 2048

//char * convertNumberIntoArray(int n);

int sort_digits(int n);
int ppow(int a, int b);

int sort_digits(int n){
  int* array;             //make integer pointer array
  array=malloc(MAX*1000); //memory allocation to array
  int n2 = n;             //deposit n to n2
  int num= 0;
  while (n2>0) {   //until n2 become 0
    num++;
    n2/=10;
  }

  for(int i=0;i<num;i++){ 
    array[i]=n%10;   //deposit the rest of n/10 to array 
    n=n/10;
  }

  // selection sort fuction
  for(int i = 0; i < num; ++i){   
    for(int j = i + 1; j < num; ++j){
      if(array[i] > array[j]){
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }

int sum=0;
int pppow=0;
for(int i = 0; i < num; i++){    //get the powered number
  pppow=ppow(10,num-i-1);
   sum = sum + array[i]*pppow;
 }

return sum;
}

int ppow(int a, int b){

 int i, ppow = 1;
 for (i = 0; i < b; i++)
  ppow *= a;       //multiply ppow with the value of a
 return ppow;
}
