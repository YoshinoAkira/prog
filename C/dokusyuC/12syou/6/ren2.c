#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int comp(const void *i,const void *j);

int main(void){
	int dic[SIZE],i;
	for(i=0;i<SIZE;i++){
		dic[i]=rand()/10000;
	}

	for(i=0;i<SIZE;i++)	{
		printf("%d,  ",dic[i]);
	}


	int *p;
	printf("input key:");
	int key;
	scanf("%d",&key);
	p=bsearch(&key,dic,SIZE,sizeof(int),comp);
	printf("a\n");

	printf("%pに%dを発見\n",p,key);
	
	return 0;
}

int comp(const void *i,const void *j){
	return *(int *)i-*(int *)j;
}
