#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp=fopen(argv[1],"r");
	FILE *to=fopen(argv[2],"w");
	char ch,ch2;

	while(!feof(fp)){
		ch=fgetc(fp);
		ch2=ch^argv[3][0];
		fputc(ch2,to);
	}


	return 0;
}
