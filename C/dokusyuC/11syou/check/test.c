#include <stdio.h>

int main(void){
	int i,j,k;
	i=1,j=2,k=3;
	int num1,num2,num3,numnum;

	num1 = i & j;
	num2 = i & k;
	num3 = j & k;
	numnum = i & j & k;

	printf("num1=%d\n",num1);
	printf("num2=%d\n",num2);
	printf("num3=%d\n",num3);
	printf("numnum=%d\n",numnum);
	

	return 0;
}
