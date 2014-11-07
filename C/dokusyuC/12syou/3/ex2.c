#include <stdio.h>
#define DOG

int main(void){
#ifdef DOG
	printf("DOGは定義されています\n");
#endif

#undef DOG
#ifdef DOG
	printf("この行はコンパイルされません\n");
#error this is an error message.
#endif

	return 0;
}
