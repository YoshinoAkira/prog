#include <stdio.h>

#define INT 0
#define FLOAT 1
#define PWR_TYPE INT

int main(void){
	int num1;
	printf("input num1: ");
	scanf("%d",&num1);
	printf("Input num2: ");
#if PWR_TYPE==INT
	int num2;
	scanf("%d",&num2);
#else
	float num2;
	scanf("%d",&num2);
#endif

	float ans=1;
	int i;
	for(i=0;i<num1;i++){
		ans*=num2;
	}
	
	printf("%f\n",ans);

	return 0;
}
