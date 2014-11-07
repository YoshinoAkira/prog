#include <stdio.h>

#define JOIN(a,b) a##b

int main(void){
	int one = 1;
	int two = 2;
	int onetwo = 3;

	printf("%d\n",JOIN(one,two));

	return 0;
}
