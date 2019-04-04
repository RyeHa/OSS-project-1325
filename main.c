#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 2048

typedef enum { false, true } boolean;

int reverse_digits(int number);
int* binarize(int n);
int sort_digits(int n);
int ppow(int a, int b);
int isPrime(int n);
int a();

int main(){
    char* input;
    input = malloc(MAX);

    while(fgets(input, sizeof(input),stdin)!= NULL){

        //Receive a user input
        if(input[strlen(input)-1]=='\n')
        input[strlen(input)-1]= 0;

        //Terminal condition
        if(strcmp(input,"quit")==0){
            printf("(bye)\n");
            break;
        }
        int is_number;
        is_number = true;
        for(int i=0;i<strlen(input);i++){
            if(!isdigit(input[i])){
                printf("Entered input is not a number\n");
                is_number = false;
                break;
            }

        }

        if(is_number){
            //Computer and print the length
            int reverse = reverse_digits(atoi(input));
            int sort = sort_digits(atoi(input));
            boolean prime = isPrime(atoi(input));
           int* binary = binarize(atoi(input));
            int cont = a();
            printf("reverse> %d\nsort> %d\n",reverse, sort);
            
            printf("binary> ");
            for(int i=0;i<=cont;i++){
                printf("%d", binary[i]);
            }
            printf("\n");

            if (prime == 1)
               printf("isPrime> true\n");
            else
               printf("isPrime> false\n");
            
            
        }
    }
    return 0;
}