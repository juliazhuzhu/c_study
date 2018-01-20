
#include <stdio.h> 
#include <limits.h> 
#include <math.h>
#include <string.h>

/*
    From C Prime Master, chapter 15, bit fiddling
    1. Write a function that converts a binary string to a numeric value. That is, if you have
    char * pbin = "01001001";
    you can pass pbin as an argument to the function and have the function return an int
    value of 25 .
*/

int calculate(int times){
    int result =1;

    result <<= times;
    /*for (int i = 0; i < times; i++){
        
        result = result* 2;
    }*/

    return result;
}

int covnert_bin(char* input){

    int len = strlen(input);
    int i = 0;
    int result = 0 ;
    int tmp = 0;
    int bit_val = 1;
    for (i = len-1; i >=0; i--){
       /* if (input[i] != '0' && input[i] != '1')
        {
            perror("input err \n");
            return -1;
        }*/
        if (input[i] == '1')
        {
            //bit_val << 
            result+=calculate(len-i-1);
            printf("in process i %d result %d \n",i, result);
        }
    }

    return result;



}

int main(){

    char * pbin = "01001000";
    int result = covnert_bin(pbin);

    char names[50][32];
    printf("name len %d \n",sizeof(names[0]));
    printf("result %d \n", result);

    return 0;
}