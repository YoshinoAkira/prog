#include <stdio.h>

int main(void){
	short i;
	i=1;
	i=i|32768;

	printf("%lu\n",sizeof(short int));
	printf("%hd\n",i);

	return 0;
}
