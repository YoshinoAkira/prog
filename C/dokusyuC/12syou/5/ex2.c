#include <stdio.h>

#define output(i) printf("%d %d\n",i ## 1, i ## 2)

int main(void){
	int count1,count2;
	int i1,i2;

	count1=10;
	count2=20;
	i1=99;
	i2=-10;

	output(count);
	output(i);

	return 0;
}
