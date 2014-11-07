#include <stdio.h>

int main(void){
	int i,j,k=3;
	i=j=k;
	printf("%d %d %d\n",i,j,k);
	i=j=k=99;
	printf("%d %d %d\n",i,j,k);

	return 0;
}
