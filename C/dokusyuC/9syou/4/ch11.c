#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]){
	FILE *fp;
	char str[80],ch[10];

	fp=fopen(argv[1],"rb");
	while(!feof(fp)){
		printf("表示を続けますか？(Yで続行):");
		fgets(ch,10,stdin);
		if(*ch!='y' && *ch!='Y'){
			break;
		}
		fgets(str,80,fp);
		printf("%s",str);
		if(feof(fp)){
			break;
		}

	}

	return 0;
}
