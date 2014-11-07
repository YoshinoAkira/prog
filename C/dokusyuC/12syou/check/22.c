#include <stdio.h>
#define CODE_IT(c) ~c

int main(void){
	int ch;
	printf("input char:");
	ch=getchar();
	printf("%c を符号化すると %cになります、\n",ch,CODE_IT(ch));

	return 0;
}
