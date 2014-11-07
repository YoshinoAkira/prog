#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *p;
	long l;

	l=0;
	do{
		p=(char *)malloc(1000);
		if(p)
			l += 1000;
	}while(p);
	printf("約 %ld バイトの空きメモリがあります。\n",l);

	return 0;
}
