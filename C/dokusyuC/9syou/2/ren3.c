#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *to,*from;
	char ch;
	from=fopen(argv[1],"rb");
	to=fopen(argv[2],"wb");
	int watch=0;
	if(argc==4){
		if(!strcmp(argv[3],"watch")){
			watch=1;
		}
	}

	while((ch=fgetc(from))!=EOF){
		if(watch){
			printf("%c",ch);
		}
		fputc(ch,to);
	}

	return 0;
}
