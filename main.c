#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 2048

typedef enum { false, true } boolean; 
// make a type named boolean which costitutu with an array, which first component is 0 and second 1

//declare all the header files
int reverse_digits(int number);
int sort_digits(int n);

int main(){
    char* input;
    input = malloc(MAX);

    while(fgets(input, sizeof(input),stdin)!= NULL){   //repeat if the input is not unvalid

        //Receive a user input
        if(input[strlen(input)-1]=='\n')
        input[strlen(input)-1]= 0;

        //Terminal condition
        if(strcmp(input,"quit")==0){
           printf("(bye)\n");
            break;
        }
        int is_number;
        is_number = 1;
        for(int i=0;i<strlen(input);i++){
            if(!isdigit(input[i])){   //if any letter of the word is not a number
                printf("Entered input is not a number\n");
                is_number = 0;
                break;
            }
        }

        if(is_number){
            //Computer and print the length
            int reverse = reverse_digits(atoi(input));   //deposit at reverse the reversed value of input
            int sort = sort_digits(atoi(input));         //deposit at sort the sorted value of input

            printf("reverse> %d\nsort> %d\n",reverse, sort);
        }
    }
    return 0;
}
