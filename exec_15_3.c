#include <stdio.h> 
#include <limits.h> 
#include <math.h>
#include <string.h>

/*
    From C Prime Plus, chapter 15, bit fiddling
    Write a function that takes an int argument and returns the number of “on” bits in the
    argument. Test the function in a program.
*/

int main(int argc, char** argv){


    int  input = atoi(argv[1]);

    printf("input %d \n", input);

    unsigned int BIT_MASK = 1;
    int on_bits = 0;
    char bin_str[CHAR_BIT * sizeof(int) + 1] = {0};
    unsigned int j = CHAR_BIT*sizeof(int);
    for (int i = 0 ; i < CHAR_BIT*sizeof(int); i++){

        unsigned int bit = (input >> i) & BIT_MASK;
        //printf("pos %d, bit %d \n", i, bit);
        if (bit == 1)
            on_bits++;

        bin_str[j-i-1] = '0' + bit;
        
    }

    bin_str[CHAR_BIT * sizeof(int)] = '\0';

    printf("bits is %s \n", bin_str);
    printf("num of on bits %d \n", on_bits);
    return 0;
}