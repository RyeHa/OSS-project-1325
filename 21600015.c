#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 2048

int reverse_digits(int number);

int reverse_digits(int number) {
  
    char * arr = (char *) malloc(MAX), * curr = arr;
      sprintf(arr, "%d", number);
    do {
        *curr++ = number % 10;
        number /= 10;
    } while (number != 0);

    int num = atoi(curr);
    return num;
}
