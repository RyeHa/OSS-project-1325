#include "21700514.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 2048


int* binarize(int n);
int sort_digits(int n);
int ppow(int a, int b);
int a();

int sort_digits(int n){
  int* array;
  array=malloc(MAX*1000);
  int n2 = n;
  int num= 0;
  while (n2>0) {
    num++;
    n2/=10;
  }

  for(int i=0;i<num;i++){
    array[i]=n%10;
    n=n/10;
  }

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
for(int i = 0; i < num; i++){
  pppow=ppow(10,num-i-1);
   sum = sum + array[i]*pppow;
 }

return sum;
}

int ppow(int a, int b){

 int i, ppow = 1;
 for (i = 0; i < b; i++)
  ppow *= a;
 return ppow;
}

int count=0;

int* binarize(int n){
  int number, binary, i=0;
  int* bin;
  int* sum;
  bin = (int*)malloc(MAX);
  sum = (int*)malloc(MAX);
  int x=0;
  number=n;
  while(number>0){
    binary=number%2;
    bin[i]=binary;
    number=number/2;
    i+=1;
    }
    count=i-1;
     int j=0;
    for(i=count; i>=0; i--){
    sum[j]=bin[i];
    j++;
    }

    // for(i=0;i<=count;i++){
    //   printf("%d", sum[i]);
    // }

    return sum;
}

int a(){
  int con = count;
  return con;
}