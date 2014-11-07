#include <stdio.h>


void sum_it(int value);

int main(void){
	int i;
	int num;
	for(i=0;i<5;i++){
		printf("input num:");
		scanf("%d",&num);
		sum_it(num);
	}
	return 0;
}


void sum_it(int value){
	static int sum=0;
	sum += value;
	printf("%d\n",sum);
}
