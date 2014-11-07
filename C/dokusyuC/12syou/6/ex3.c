#include <stdio.h>
#include <stdlib.h>

int comp(const void *i,const void *j);

int main(void){
	int sort[100],i;
	for(i=0;i<100;i++)
		sort[i]=rand()/1000000;
	for(i=0;i<100;i++)
		printf("%d ",sort[i]);
	printf("\n");
	qsort(sort,100,sizeof(int),comp);

	for(i=0;i<100;i++){
		printf("%d\n",sort[i]);
	}

	return 0;
}

int comp(const void *i,const void *j){
	return (*(int*)i) - (*(int*)j);
}
