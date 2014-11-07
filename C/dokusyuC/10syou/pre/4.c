#include <stdio.h>

int main(void){
	FILE *fp=fopen("temp","rb");
	int num[20];
	fread(num,sizeof num,1,fp);
	int i;
	for(i=0;i<20;i++){
		printf("%d ",num[i]);
	}
	printf("\n");

	return 0;
}
