#include "21700514.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 2048

//char * convertNumberIntoArray(int n);

void selection_sort(char* array, int n);

int sort_digits(int n){
    //int length = (int)(log10((float)n)) + 1;
    char * arr = (char *) malloc(MAX);

    //convertNumberIntoArray(n);
    sprintf(arr,"%x",n);

    selection_sort(arr, sizeof(arr));

    n = atoi(arr);

    return n;
}

void selection_sort(char* array, int n){
  for(int i = 0; i < n; ++i){
    for(int j = i + 1; j < n; ++j){
      if(array[i] > array[j]){
        char tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
}

// char * convertNumberIntoArray(int num) {
//     int length = (int)(log10((float)num)) + 1;
//     char * arr = (char *) malloc(length * sizeof(char)), * curr = arr;
//     do {
//         *curr++ = num / 10;
//         num /= 10;
//     } while (num != 0);
//     return arr;
//     }
