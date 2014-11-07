#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void *a, const void *b);

int main(void){
	char ch[]="this is a test of sort";
	printf("before sorting:%s\n",ch);
	
	qsort(ch,strlen(ch),sizeof(char),comp);

	printf("after sorting:%s\n",ch);


	return 0;
}

int comp(const void *a,const void *b){
	printf("a");
	return *(char *)a-*(char *)b;
}
