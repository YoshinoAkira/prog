#include <stdio.h>
union {
	short int i;
	char ch[2];
}pre;

int main(void){
	printf("%ld\n",sizeof(short int));
	pre.i=10000;
	int d;
	for(d=0;d<2;d++){
		printf("%c\n",pre.ch[d]);
	}

	return 0;
}
