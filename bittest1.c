
#include <stdio.h>

int main(){

	int b;

	b = 1;
	printf("%d ^ 1 %d \n", b,b^1);
	
	b = 0;
	printf("%d ^ 1 %d \n", b,b^1);

	b = 1;
	printf("%d ^ 0 %d \n", b,b^0);
	
	b = 0;
	printf("%d ^ 0 %d \n", b,b^0);


	return 1;
}