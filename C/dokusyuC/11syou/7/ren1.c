#include <stdio.h>

int main(void){
	float num1,num2;
	printf("input num 1:");
	scanf("%f",&num1);
	printf("input num 2:");
	scanf("%f",&num2);
	
	float ans=0;

	num2 == 0 ? printf("num2は0なので割れません。\n"):  printf("num1 / num2 = %lf\n",num1/num2);

	

	return 0;
}
