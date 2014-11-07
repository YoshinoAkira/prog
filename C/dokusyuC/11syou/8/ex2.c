#include <stdio.h>

int main(void){
	int i,j;
	for(i=0,j=0; i<100; i+=2,j++){
		printf("%d %d\n",j,i);
	}


	return 0;
}
