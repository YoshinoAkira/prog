#include <stdio.h>

void myabs(const void *num);

int main(void){
	int a;
	a=3;
	myabs(&a);
	return 0;
}

void myabs(const void *num){
	int *p;
	printf("a\n");

	return p;
}
