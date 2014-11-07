#include <stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen(argv[1],"rb");
	while(!feof(fp)){
		ch = fgetc(fp);
		count++;
		printf("%ld %c\n",ftell(fp),ch);
		if(count==10){
			break;
		}
	}

	printf("count=%d\n",count);

	
	return 0;


}
