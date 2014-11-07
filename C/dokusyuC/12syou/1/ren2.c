#include <stdio.h>
#define abs(i) (i) > 0 ? i: -(i)

int main(void){
	int num;
	printf("input num:");
	scanf("%d",&num);

	printf("abs(%d)=%d\n",num,abs(num));

	return 0;
}
