#include        <stdio.h>

int main(void){
	char a;
	printf("文字の入力 ");
	scanf("%c",&a);
	/* fflushを省くと、２回目以降の文字入力が正常に行われません。*/
	

	printf("文字の入力 ");   
	fflush(stdin); 
	scanf("%c",&a);
	
	return 0;
}
