#include <stdio.h>
#include <stdlib.h>
#define POINTER 0
#define LIST 1
#define PATTERN POINTER


int main(void){
	
	int *p,i;
	p=(int *)malloc(10*sizeof(int));
#if PATTERN == POINTER
	printf("pointer:\n");
	int *tmp;
	tmp=p;
	for(i=0;i<10;i++){
		*p=rand()/10000;
		p++;
	}
	printf("au\n");
	while(*tmp){
		printf("%d, ",*tmp);
		tmp++;
	}
#else
	printf("LIST:\n");
	for(i = 0;i<10;i++){
		p[i]=rand()/10000;
	}
	for(i=0;i<10;i++)
		printf("%d,  ",p[i]);
#endif


		
	return 0;
}
