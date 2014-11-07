#include <stdio.h>
int main(void){
	short int num1,num2,i=1,j,numnum;
	
	printf("input num1: ");
	scanf("%hd",&num1);
	printf("input num2: ");
	scanf("%hd",&num2);

	for(j=1; ; i<<=1,j++){
		if(i==256)
			break;
		numnum = num1 ^ num2;
		if((numnum + i) & i)
			printf("%hdビット目\n",j);
	}
	return 0;
}
