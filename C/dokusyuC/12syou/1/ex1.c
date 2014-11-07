#include <stdio.h>

#define MAX(i,j) i > j ? i: j

int main(void){
	printf("%d\n", MAX(1,2));
	printf("%d\n",MAX(1,-1));

	printf("%d\n",MAX(100 && -1, 0));
	
	return 0;
}
