#include <stdio.h>

int main(void){
	FILE *fp=fopen("temp","wb");
	int num[20],i;
	for(i=0;i<20;i++){
		num[i]=i+1;
	}
	fwrite(num,sizeof num,1,fp);

	fclose(fp);

	return 0;


}
