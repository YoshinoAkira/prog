#include <stdio.h>

enum computer {keyboard, CPU, screen, printer};

int main(void){
	enum computer comp;
	comp = CPU;
	printf("cpu:%d\n", comp);
	comp++;	
	printf("comp++:%d\n",comp);
	comp = CPU;
	printf("cpu:%d\n",comp);
	
	return 0;
}
