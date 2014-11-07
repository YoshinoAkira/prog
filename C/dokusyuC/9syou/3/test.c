#include <stdio.h>
int main(int argc, char *argv[]){
	int count1=0,count2=0;
	FILE *fp;

	fp=fopen(argv[1],"rb");
	while((fgetc(fp))!=EOF){
		count1++;
	}
	printf("EOFでは%d\n",count1);
	fclose(fp);
	fp=fopen(argv[1],"rb");
	while(!feof(fp)){
		fgetc(fp);
		count2++;
	}
	printf("feofでは%d\n",count2);
	fclose(fp);
	return 0;
}
