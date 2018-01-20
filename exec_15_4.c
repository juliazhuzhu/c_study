#include <stdio.h> 
#include <limits.h> 
#include <math.h>
#include <string.h>

/*
    From C Prime Plus, chapter 15, bit fiddling
    Write a function that takes two int arguments: a value and a bit position. Have the
    function return 1 if that particular bit position is 1, and have it return 0 otherwise. Test
    the function in a program.
*/

int main(int argc, char** argv){

    int  value = atoi(argv[1]);
    int  pos = atoi(argv[2]);

    printf("value %d \n", value);
    printf("pos %d \n", pos);

    unsigned int MASK = 1;
    //pos range ~ 32, from left to right
    if (pos > (CHAR_BIT*sizeof(int) - 1))
        pos =  (CHAR_BIT*sizeof(int) - 1);

    MASK = MASK << pos;
    if( (value & MASK) == MASK)
        printf("the bit is 1 \n");
    else
        printf("the bit is 0 \n");

    return 0;
}