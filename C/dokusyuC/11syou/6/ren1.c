#include <stdio.h>

int main(void){
	int num;
	printf("input num:");
	scanf("%d",&num);
	
	printf("%dを1/2にすると、%d\n",num,num>>1);
	printf("%dを×dは、%d\n",num,num<<1);

	return 0;
}
