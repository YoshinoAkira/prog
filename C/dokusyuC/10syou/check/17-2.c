#include <stdio.h>
int main(void){
	union rensyu{
		short int a;
		char ch[2];
	}ren;
	ren.a=18000;
	short int sd=5;
	printf("ren.a=%hd\n",ren.a);
	printf("char[0]=%c\n",ren.ch[0]);
	printf("char[1]=%c\n",ren.ch[1]);
	return 0;
}
