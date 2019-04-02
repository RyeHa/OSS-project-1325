#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 2048

int reverse_digits(int number);
int sort_digits(int n);
void selection_sort(char* array, int n);
char * convertNumberIntoArray(int num);

int main(){
    char* input;
    input = malloc(MAX);

    while(fgets(input, sizeof(input),stdin)!= NULL){

        //Receive a user input
        if(input[strlen(input)-1]=='\n')
        input[strlen(input)-1]= 0;

        //Terminal condition
        if(strcmp(input,"quit")==0){
            break;
        }
        int is_number;
        is_number = 1;
        for(int i=0;i<strlen(input);i++){
            if(!isdigit(input[i])){
                printf("Entered input is not a number\n");
                is_number = 0;
                break;
            }
        }

        if(is_number){
            //Computer and print the length
            int reverse = reverse_digits(atoi(input));
            int sort = sort_digits(atoi(input));
            printf("reverse> %d\nsort> %d\n",reverse, sort);
        }
    }
    return 0;
}
