#include <stdio.h> 
#include <limits.h> 
#include <math.h>
#include <string.h>

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