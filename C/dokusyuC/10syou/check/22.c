#include <stdio.h>

int main(void){
	FILE *fp=fopen("test","r");
	FILE *to=fopen("myfile","w");
	union u_copy{
		int i;
		char ch[4];
	}cop;
	while(!feof(fp)){
		cop.i=fgetc(fp);
		if(cop.i==-1){
			printf("EOF\n");
			break;
		}
		fputc(cop.ch[0],to);
	}
	return 0;
}
