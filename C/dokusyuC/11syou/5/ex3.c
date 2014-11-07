#include <stdio.h>

int main(void){
	char ch;
	int i;
	ch='a';

	for(i=128; i>0; i= i/2)
		if(i & ch)
			printf("1 ");
		else
			printf("0 ");

	ch=~ch;
	printf("\n");

	for(i=128;i>0;i=i/2)
		if(i&ch)
			printf("1 ");
		else
			printf("0 ");

	return 0;
}
