#include <stdio.h>

#define MKSTRING(str) # str

int main(void){
	int value;
	value = 10;
	printf("%s の値は %d です。",MKSTRING(value),value);
	return 0;
}
