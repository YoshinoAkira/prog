#include <stdio.h>
#include <string.h>

int main(void){
	char ch,str[80];
	int i;
	
	printf("文字を入力してください。:");
	ch = getchar();
	fgets(str,80,stdin);
	printf("\n");
	printf("%d\n",ch);
	for(i=128; i>0; i=i/2){
		if(i & ch)
			printf("1 ");
		else
			printf("0 ");
	}


	return 0;
}
