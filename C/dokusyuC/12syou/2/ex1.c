#include <stdio.h>

#define CHAR_SET 256

int main(void){
	int i;

	#if CHAE_SET ==256
		printf("すべてのASCII文字セットと拡張子を表示する。\n");
	#else
		printf("ASCII文字セットのみを表示する\n");
	#endif
	
	for(i=0;i<CHAR_SET;i++)
		printf("%c",i);

	return 0;

}

