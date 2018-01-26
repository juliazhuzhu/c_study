
#include <stdio.h>
#pragma pack(1)
struct s {
    char ch;
    int i;
};
#pragma pack()

//try to comment the prama, you can see the diffrence
int main(){


    printf("check pargma %d \n", sizeof(struct s));
    return 0;
}