#include <stdio.h>
int main(int argc,char *argv[]){
	FILE *from,*to;
	int i;
	char ch;

	from=fopen(argv[1],"rb");
	to=fopen(argv[2],"wb");

	while(!feof(from)){
		if((ch=fgetc(from))==EOF){
			break;
		}
		if(ch=='\t'){
			for(i=0;i<4;i++){
				fputc(' ',to);
			}
		}else{
			fputc(ch,to);
		}
	}
	fclose(from);
	fclose(to);
		
	return 0;
}
